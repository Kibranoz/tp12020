/*
 * programmeprincipal.cpp
 *
 *  Created on: 2020-02-11
 *      Author: etudiant
 */
#include <iostream>
#include "fonctions.h"
using namespace std;

int main(){
	cout << "Veuillez entrer un numéro de telephone" << endl;
	string p_telephone;
	getline(cin, p_telephone);
	if (validerTelephone(p_telephone)){
		cout << "Numéro valide" << endl;
	}
	else {
		cout << "Numéro invalide" << endl;
	}
	return 0;

}


