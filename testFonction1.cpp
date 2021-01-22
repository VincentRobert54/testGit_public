/***************************

*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())


using namespace std;
/*****************************
Fonction 1
*****************************/
void fonction1()
{
	cout <<"Fonction1"<<endl;
}

/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{

	cout <<"Bonjour tout le monde"<<endl;

	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}