/*
 * fonctions.cpp
 *
 *  Created on: 2020-02-10
 *      Author: etudiant
 */
#include "validationFormat.h"

#include <iostream>
#include <cctype>



using namespace std;

namespace util {

char intToCharNumber(int num){
    return (char) num + 48;
}


bool isLetter(char seq[], int debut, int fin){
  //debut : position du premier caractère à vérifier
  //fin position du dernier caractère à vérifier, inclusivement
  //a et i des constantes d'itérations
  string letter = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  for (int a = debut; a<=fin; a++){
      for (int i=0; i<=25; i++){
  if (seq[a] == letter[i]){
    break;
  }
  if (i == 25 ){
    return false;
  }
}
}
return true;
}
bool isNumber(char seq[], int debut, int fin){
  //debut : position du premier caractère à vérifier
  //fin position du dernier caractère à vérifier, inclusivement
  //a et i des constantes d'itérations
  string number = {'1','2','3','4','5','6','7','8','9','0'};// "1234567890"
  for (int a = debut; a<=fin; a++){
  for (int i=0; i<=9; i++){ //si
  if (seq[a] == number[i]){
    break;
  }
  if (i == 9){
    return false;
  }
}
}
return true;
}

bool validerTelephone(const std::string& p_telephone){
	//permet d'accéder à la variable en tant que telle (pas une copie?)
	char listNumber[p_telephone.size()];
	strcpy(listNumber, p_telephone.c_str());
	if (isNumber(listNumber,0,2) && listNumber[3] == ' ' && isNumber(listNumber,4,6) && listNumber[7] == '-' && isNumber(listNumber,8,11))
	{
		return true;
	}
	else {
		return false;
	}

}
bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom, const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int p_anneeNaissance, char p_sex){
	//utiliser un ostringstream pour tout si j'ai le temps
	char listNom[p_nom.size()];
	char listPrenom[p_prenom.size()];
	char listNumero[p_numero.size()];
	strcpy(listNom, p_nom.c_str());
	strcpy(listPrenom, p_prenom.c_str());
	strcpy(listNumero, p_numero.c_str());
	if (isLetter(listNumero,0,3) && listNumero[4] == ' '  && isNumber(listNumero,5,8) && listNumero[9] == ' ' && isNumber(listNumero,10,13)){
	for (int i = 0; i<=2; i++){
		if (listNumero[i] != toupper(listNom[i])){
			return false;
		}
	}
	if (listNumero[3] != toupper(listPrenom[0])){
		return false;
	}
	if (p_sex == 'F'){
		p_moisNaissance += 50;
	}
	string anneeString = to_string(p_anneeNaissance);
	string moisString = to_string(p_moisNaissance);

	if (p_moisNaissance < 10){
		moisString = "0" + to_string(p_moisNaissance);
	}
		string jourString = to_string(p_jourNaissance);
	if (p_jourNaissance < 10) {
		jourString = "0" + to_string(p_jourNaissance);
	}

	ostringstream numdate;
	numdate << anneeString.substr(2,2) << moisString << " " << jourString;
	char numDateChar[numdate.str().size()];
	strcpy(numDateChar, numdate.str().c_str());
	for (int j = 5; j <= 11; j++){
		if (listNumero[j] != numDateChar[j-5]){
			return false;
		}
	}
	}
	else {
		return false;
	}
	return true;
}
bool validerFormatNom(const std::string & p_nom){
	char pNomChar[p_nom.size()];
	strcpy(pNomChar,p_nom.c_str());
	for (int i = 0; i <= p_nom.size(); i++){
		pNomChar[i] = toupper(pNomChar[i]);
	}
	if (isLetter(pNomChar,0,p_nom.size())){
		return true;
	}
	else{
		return false;
	}
}
};
