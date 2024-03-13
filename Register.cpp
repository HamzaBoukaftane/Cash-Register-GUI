/*
* Ce programme definit les methodes de la classe Register (modele)
* fichier  Register.cpp.
* auteurs Hamza Boukaftane and Rayan-Atman Ait-Aoudia
* date    9 decembre 2022
* Created 4 decembre 2022
*/

#include "Register.h"

rgt::Register::~Register() 
{
	bool isEmpty = (items_.size() == NULL);
	if (!(isEmpty))
	{
		for (auto iPtr : items_)
		{
			delete iPtr;
		}
	}
}

double rgt::Register::getSubTotal() const 
{ 
	bool isNegative = (subtotal_ < NULL);
	bool isZero = (subtotal_ == NULL);
	if (isNegative && isZero)
		return subtotal_ * subtotal_;
	return subtotal_; 
}

double rgt::Register::calculateTaxTotal() const
{
	double taxTotal = NULL;
	std::vector<Item*>  taxableItem;
	std::vector<double> subTotalOfTaxableItem;
	
	std::copy_if
	(
		  items_.begin(),
		  items_.end(),
		  std::back_inserter(taxableItem),
		  [&](Item* item) {return item->istaxable; }
	);

	std::for_each
	(
		taxableItem.begin(),
		taxableItem.end(),
		[&](Item* item) {taxTotal += (item->price * rgt::TAX_RATE);}
	);
	
	return taxTotal;
}

double rgt::Register::calculateFullTotal() const
{
	return getSubTotal() + calculateTaxTotal();
}

void rgt::Register::addItem(Item* iPtr)
{
	bool isOnlyFree  = (iPtr->price == NULL);
	bool isOnlyEmpty = (iPtr->description.size() == NULL);
	bool isSpace     = (iPtr->description[NULL] == ' ');
	bool isUntouched = (isOnlyFree && isOnlyEmpty);
	bool isFree      = (isOnlyFree && !(isOnlyEmpty) && !(isSpace));
	bool isEmpty     = (isOnlyEmpty && !(isOnlyFree) && !(isSpace));

	if (isFree)
		throw std::invalid_argument("Can not add free item !");
	else if (isSpace)
		throw std::invalid_argument("Can not add item with blank space as first character of description !");
	else if (isEmpty)
		throw std::invalid_argument("Can not add item without description !");
	else if (isUntouched)
		throw std::invalid_argument("No description and no price !");
	else
	{
		subtotal_ += iPtr->price;
		items_.push_back(iPtr);
		emit addedItem(iPtr);
	}
}

void rgt::Register::deleteItem(Item* iPtr)
{
	auto it = std::find(items_.begin(), items_.end(), iPtr);

	bool isExistant = (it != items_.end());

	if (isExistant)
	{
		subtotal_ -= iPtr->price;
		Item* item = *it;
		items_.erase(it);
		emit deletedItem(item);
	}
}
