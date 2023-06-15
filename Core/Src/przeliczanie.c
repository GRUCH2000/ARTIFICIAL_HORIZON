/*
 * przeliczanie.c
 *
 *  Created on: 12 cze 2023
 *      Author: mikol
 */

#include "przeliczanie.h"


double przeliczSygnalZCzujnikaNaMikrosekundy(double sygnalWejsciowy, double minimalnaDlugoscSygnalu, double maksymalnaDlugoscSygnalu, double minimalneWychylenieSerwa, double maksymalneWychylenieSerwa)
{
	return ((((sygnalWejsciowy - minimalnaDlugoscSygnalu)*(maksymalneWychylenieSerwa - minimalneWychylenieSerwa))/(maksymalnaDlugoscSygnalu - minimalnaDlugoscSygnalu)) + minimalneWychylenieSerwa);
}

double sprawdzenieKanaluPochylenia(double sygnalDoSerwomechanizmuKanaluPochylenia)
{
	if (sygnalDoSerwomechanizmuKanaluPochylenia<63)
		{
		return 63;
		}
	else if(sygnalDoSerwomechanizmuKanaluPochylenia>87)
		{
		return 87;
		}
	else
		{
		return sygnalDoSerwomechanizmuKanaluPochylenia;
		}
}
;
