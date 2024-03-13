/*
* Ce programme declare de la classe RegisterGUI qui contient 
* un pointeur vers RegisterGUIClass (fichier.h genere automatiquement
* par QT). Cette classe represente l'aspect Vue-Controleur.
* fichier  RegisterGUI.h
* auteurs Hamza Boukaftane and Rayan-Atman Ait-Aoudia
* date    9 decembre 2022
* Created 4 decembre 2022
*/

#pragma once
#include <QMainWindow>
#include "ui_RegisterGUI.h"
#include "Register.h"
#include <QMessageBox>
#include <Qstring>
#include <QVariant>

using namespace std;
using namespace rgt;

const int POURCENT = 100;
const int ADJUST = 4;

QT_BEGIN_NAMESPACE
namespace Ui { class RegisterGUIClass; };
QT_END_NAMESPACE

class RegisterGUI : public QMainWindow
{
	Q_OBJECT

public:
	
	RegisterGUI(QWidget *parent = nullptr);
	~RegisterGUI();

public slots:
	
	void updatePrices();
	void appendItem();
	void displayItemsAfterAddition(Item* iPtr);
	void removeItem();
	void displayItemsAfterDeletion(Item* iPtr);
	void resetAll();

private:
	
	string setTwoDecimals(double number);
	void resetAddingDisplay();
	void setConnections();
	
	Register* register_;
	Ui::RegisterGUIClass *ui;
};

