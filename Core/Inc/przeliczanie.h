/*
 * przeliczanie.h
 *
 *  Created on: 12 cze 2023
 *      Author: mikol
 */

#ifndef INC_PRZELICZANIE_H_
#define INC_PRZELICZANIE_H_

#include "main.h"
#include <stdint.h>


double przeliczSygnalZCzujnikaNaMikrosekundy(double sygnalWejsciowy, double minimalnaDlugoscSygnalu, double maksymalnaDlugoscSygnalu, double minimalneWychylenieSerwa, double maksymalneWychylenieSerwa);

double sprawdzenieKanaluPochylenia(double sygnalDoSerwomechanizmuKanaluPochylenia);

#endif /* INC_PRZELICZANIE_H_ */
