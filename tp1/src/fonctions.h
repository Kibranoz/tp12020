/*
 * fonctions.h
 *
 *  Created on: 2020-02-10
 *      Author: etudiant
 */

#ifndef SRC_FONCTIONS_H_
#define SRC_FONCTIONS_H_
#include <cstring>

bool validerTelephone(const std::string& p_telephone);
bool isNumber(char seq[], int debut, int fin);

bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom, const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int p_anneeNaissance, char p_sex);



#endif /* SRC_FONCTIONS_H_ */
