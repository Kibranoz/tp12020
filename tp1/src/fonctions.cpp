/*
 * fonctions.cpp
 *
 *  Created on: 2020-02-10
 *      Author: etudiant
 */
#include <iostream>
#include "fonctions.h"

using namespace std;

bool isLetter(char ima[], int debut, int fin){
  //debut : position du premier caractère à vérifier
  //fin position du dernier caractère à vérifier, inclusivement
  //a et i des constantes d'itérations
  string letter = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  for (int a = debut; a<=fin; a++){
      for (int i=0; i<=25; i++){
  if (ima[a] == letter[i]){
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

