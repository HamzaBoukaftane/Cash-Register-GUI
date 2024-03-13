/*
* Ce programme permet de manipuler une interface utilisateur
* repliquant l'utilisation d'une caisse enregistreuse. 
* L'interface est concu grace a QT designer.
* fichier  main.cpp
* auteurs Hamza Boukaftane and Rayan-Atman Ait-Aoudia
* date    9 decembre 2022
* Created 4 decembre 2022
*/

#include "Register.h"
#include "RegisterGUI.h"
#include <QApplication>
#if __has_include("bibliotheque_cours.hpp")
#include "bibliotheque_cours.hpp"
#define BIBLIOTHEQUE_COURS_INCLUS
using bibliotheque_cours::cdbg;
#else
auto& cdbg = clog;
#endif
#if __has_include("verification_allocation.hpp")
#include "verification_allocation.hpp"
#include "debogage_memoire.hpp"  //NOTE: Incompatible avec le "placement new", ne pas utiliser cette entête si vous utilisez ce type de "new" dans les lignes qui suivent cette inclusion.
#endif

void initialiserBibliothequeCours([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
#ifdef BIBLIOTHEQUE_COURS_INCLUS
	bibliotheque_cours::activerCouleursAnsi();  // Permet sous Windows les "ANSI escape code" pour changer de couleurs https://en.wikipedia.org/wiki/ANSI_escape_code ; les consoles Linux/Mac les supportent normalement par defaut.

	 //cdbg.setTee(&clog);  // Decommenter cette ligne pour que cdbg affiche sur la console en plus de la "Sortie" du debogueur.

	bibliotheque_cours::executerGoogleTest(argc, argv); // Attention de ne rien afficher avant cette ligne, sinon l'Explorateur de tests va tenter de lire votre affichage comme un resultat de test.
#endif
	//NOTE: C'est normal que la couverture de code dans l'Explorateur de tests de Visual Studio ne couvre pas la fin de cette fonction ni la fin du main apres l'appel à cette fonction puisqu'il execute uniquement les tests Google Test dans l'appel ci-dessus.
}

int main(int argc, char* argv[])
{
	bibliotheque_cours::VerifierFuitesAllocations verifierFuitesAllocations;
	QApplication app(argc, argv);
	initialiserBibliothequeCours(argc, argv);

	RegisterGUI registerWindow;
	registerWindow.show();
	return app.exec();
}
