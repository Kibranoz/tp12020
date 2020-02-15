/*
 * fonctions.h
 *
 *  Created on: 2020-02-10
 *      Author: etudiant
 */

#ifndef SRC_VALIDATIONFORMAT_H_
#define SRC_VALIDATIONFORMAT_H_
#include <string>
#include <cstring>

char intToCharNumber(int num);
bool validerTelephone(const std::string& p_telephone);
bool isNumber(char seq[], int debut, int fin);
bool isLetter(char seq[], int debut, int fin);

bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom, const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int p_anneeNaissance, char p_sex);



#endif /* SRC_VALIDATIONFORMAT_H_ */
