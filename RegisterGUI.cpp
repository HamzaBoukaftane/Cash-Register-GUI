/*
* Ce programme definit les methodes de la classe RegisterGUI
* (Vue-Controleur).
* fichier  RegisterGUI.cpp
* auteurs Hamza Boukaftane and Rayan-Atman Ait-Aoudia
* date    9 decembre 2022
* Created 4 decembre 2022
*/


#include "RegisterGUI.h"

RegisterGUI::RegisterGUI(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::RegisterGUIClass())
{
	register_ = new Register;
	
	ui->setupUi(this);
	ui->btnDelete->setDisabled(true);
	
	setConnections();
	updatePrices();
}

RegisterGUI::~RegisterGUI()
{
	delete ui;
	delete register_;
}

string RegisterGUI::setTwoDecimals(double number)
{
	size_t size = to_string(number).size() - ADJUST;
	return to_string((round(number * POURCENT)) / POURCENT).erase(size, ADJUST);
}

void RegisterGUI::resetAddingDisplay()
{
	ui->lineEditDescription->setText(" ");
	ui->lineEditPrice->setText(" ");
	ui->taxable->setChecked(false);

}

void RegisterGUI::setConnections()
{
	connect(ui->btnAddItem,SIGNAL(clicked()),          this, SLOT(appendItem()));
	connect(ui->btnDelete, SIGNAL(clicked()),          this, SLOT(removeItem()));
	connect(ui->btnReset,  SIGNAL(clicked()),          this, SLOT(resetAll()));
	connect(register_,     SIGNAL(addedItem(Item*)),   this, SLOT(displayItemsAfterAddition(Item*)));
	connect(register_,     SIGNAL(deletedItem(Item*)), this, SLOT(displayItemsAfterDeletion(Item*)));
}

void RegisterGUI::updatePrices()
{
	string subtotal  = setTwoDecimals(register_->getSubTotal());
	string taxTotal  = setTwoDecimals(register_->calculateTaxTotal());
	string total     = setTwoDecimals(register_->calculateFullTotal());

	ui->labelSubtotalPrint->setText((subtotal + "$").c_str());
	ui->labelTaxesPrint->   setText((taxTotal + "$").c_str());
	ui->labelTotalPrint->   setText((total    + '$').c_str());
}

void RegisterGUI::appendItem()
{
	Item* newItem = new Item;
	newItem->description = ui->lineEditDescription->text().toStdString();
	newItem->price       = ui->lineEditPrice->text().toDouble();
	newItem->istaxable   = ui->taxable->isChecked();
	try
	{
		register_->addItem(newItem);
	}
	catch (invalid_argument& exception)
	{
		QMessageBox mBox;
		mBox.warning(NULL, "Warning: Incomplete Item", exception.what());
		delete newItem;
	}
	updatePrices();
}

void  RegisterGUI::displayItemsAfterAddition(Item* iPtr)
{
	string itemFullDescription;
	string taxDescription;
	string pricedescription = setTwoDecimals(iPtr->price);
	bool   isRepeat         = (ui->repeat->isChecked());
	bool   isTaxable        = (iPtr->istaxable);

	if (isTaxable)
		taxDescription = " + tax ";
	else
		taxDescription = " no tax ";

	itemFullDescription = iPtr->description + "\t" + pricedescription + " $ " + taxDescription;
	QListWidgetItem* showItem = new QListWidgetItem(QString::fromStdString(itemFullDescription), ui->listRegisterWidget);
	showItem->setData(Qt::UserRole, QVariant::fromValue<Item*>(iPtr));
	
	ui->btnDelete->setDisabled(false);
	
	if (!(isRepeat))
		resetAddingDisplay();
}

void RegisterGUI::removeItem()
{
	vector<Item*> selectedItemForRemoval;
	for (QListWidgetItem* item : ui->listRegisterWidget->selectedItems())
	{
		selectedItemForRemoval.push_back(item->data(Qt::UserRole).value<Item*>());
	}
	for (auto ptr : selectedItemForRemoval)
	{
		register_->deleteItem(ptr);
		delete ptr;
	}
	updatePrices();
}

void RegisterGUI::displayItemsAfterDeletion(Item* iPtr)
{
	bool isEmpty = (ui->listRegisterWidget->count() == 0);
	
	for (int i = 0; i < ui->listRegisterWidget->count(); ++i)
	{
		QListWidgetItem* showItem = ui->listRegisterWidget->item(i);
		auto ptrItem = showItem->data(Qt::UserRole).value<Item*>();
		if (ptrItem == iPtr)
		{
			delete showItem;
			break;
		}
	}
	
	if (isEmpty)
		ui->btnDelete->setDisabled(true);
	
}

void RegisterGUI::resetAll()
{
	vector<Item*> allItemsForRemoval = {};
	for (int i = 0; i < ui->listRegisterWidget->count(); ++i)
	{
		allItemsForRemoval.push_back(ui->listRegisterWidget->item(i)->data(Qt::UserRole).value<Item*>());
	}
	for (auto&& iPtr : allItemsForRemoval)
	{
		register_->deleteItem(iPtr);
		delete iPtr;
	}
	ui->btnDelete->setDisabled(true);
	updatePrices();
}


