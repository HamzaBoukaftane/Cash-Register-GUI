/*
* Ce programme definit le namespace rgt (namespace modele) qui contient
* la declaration de la classe Item et de la classe Register
* fichier  Register.h.
* auteurs Hamza Boukaftane and Rayan-Atman Ait-Aoudia
* date    9 decembre 2022
* Created 4 decembre 2022
*/

#pragma once
#include <string>
#include <vector>
#pragma warning(push, 0) // Sinon Qt fait des avertissement quand a /W4
#include <QObject>
#pragma pop()
#include <iostream>
#include <algorithm>

namespace rgt
{
	const double TAX_RATE = 0.14975;
	
	class Item
	{
	public:
		Item()  = default;
		~Item() = default;
		std::string description = "";
		double      price       = NULL;
		bool        istaxable   = false;
	};

	class Register : public QObject
	{
		Q_OBJECT

	public:
		
		Register() = default;
		~Register();
		
		double getSubTotal() const;
		double calculateTaxTotal() const;
		double calculateFullTotal() const;

	public slots:
		
		void addItem(Item* iPtr);
		void deleteItem(Item* iPtr);

	signals:
		
		void addedItem(Item* iPtr);
		void deletedItem(Item* iPtr);

	private:
		
		std::vector<Item*> items_ ;
		double subtotal_ = NULL;

	};
}
