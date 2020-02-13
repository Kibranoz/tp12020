/*
 * programmeprincipal.cpp
 *
 *  Created on: 2020-02-11
 *      Author: etudiant
 */
#include <iostream>

#include "validationFormat.h"
using namespace std;

int main(){
	if (validerNumRAMQ("COUL 9809 0519", "Couture", "Louis", 5,9,1998,'H')){
	cout << "Valide" << endl;
	}
	else {
		cout << "Invalide" << endl;
	}
	cout << "Veuillez entrer un numéro de telephone" << endl;
	string p_telephone;
	getline(cin, p_telephone);
	if (validerTelephone(p_telephone)){
		cout << "Numéro valide" << endl;
	}
	else {
		cout << "Numéro invalide" << endl;
	}
	cout << "Veuillez entrer votre numéro d'asssurance maladie" << endl;
	string p_Numero;
	getline(cin, p_Numero);
	cout << "Veuillez entrer votre année de Naissance" << endl;
	int p_anneeNaissance;
	cin >> p_anneeNaissance;
	cout << "Veuillez entrer votre mois  de naissance (1-12)" << endl;
		int p_moisNaissance;
		cin >> p_moisNaissance;
	cout << "Veuillez entrer votre journée de Naissance (0-31)" << endl;
	int p_JourNaissance;
	cin >> p_JourNaissance;
	cout << "Veuillez entrer votre prenom" << endl;
	string p_prenom;
	cin >> p_prenom;
	cout << "Veuillez entrer votre nom" << endl;
	string p_nom;
	cin >> p_nom;;
	cout << "Veuillez entrer votre sexe (H/F/A)" << endl;
	char p_sex = 'H';
	//cin >> p_sex;
	//cin.ignore();
	if (validerNumRAMQ(p_Numero, p_nom, p_prenom, p_JourNaissance, p_moisNaissance, p_anneeNaissance, p_sex)){
		cout << "Votre carte est valide" << endl;
	}
	else {
		cout << "Carte invalide" << endl;
	}

	return 0;
}


