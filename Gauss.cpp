//**************************************************************//
// Engenharia Inform·tica - ProgramaÁ„o Orientada a Objetos     //
// Trabalho Pr·tico Final - CriaÁ„o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - SÈrgio Correia                                     //
// Frederico Balc„o - 15307                                     //
// Jo„o Cunha - 17210                                           //
//**************************************************************//

#include <cstdlib>
#include <cmath>
#include <limits>
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"
#include "Gauss.h"

#define PI 3.14159265358979323846						//definido o PI para c·lculo da distribuiÁ„o Normal

/*-----------------------------------------------*/
/* Construtor Gauss da Classe Gauss por default  */
/* Recebe como par‚metros: Nenhum                */
/*-----------------------------------------------*/
Gauss::Gauss()
{
	srand((unsigned int)time(NULL));					//funÁ„o srand para utilizar rand(), RAND_MAX
	_media = 120;
	_desviopadrao = 10;
	_intI = 100;										//intervalo inferior
	_intS = 200;										//intervalo superior
}

/*-----------------------------------------------*/
/* Destrutor Gauss da Classe Gauss               */
/* Recebe como par‚metros: Nenhum                */
/*-----------------------------------------------*/
Gauss::~Gauss()
{

}

/*-------------------------------------------------------------------------------*/
/* MÈtodo Gauss da Classe Gauss                                                  */
/* Recebe como par‚metros: media, desvio padrao, intervalo inferior e superior   */
/*-------------------------------------------------------------------------------*/
Gauss::Gauss(float media, float desvio_padrao, float inter_inf, float inter_sup) {
	_media = media;
	_desviopadrao = desvio_padrao;
	_intS = inter_sup;
	_intI = inter_inf;

	printf("Passei pelo construtor com inicializacao\n");
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo setM da Classe Gauss que atribui ÅEconstante privada _media o valor de M que recebe do metodo   */
/* Recebe como par‚metros: M (a media dada pelo utilizador)                                              */
/*-------------------------------------------------------------------------------------------------------*/
void Gauss::setM(float M) {
	_media = M;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getM da Classe Gauss que retorna o valor da media                                              */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float Gauss::getM() {
	return _media;
}

/*-------------------------------------------------------------------------------------------------------------*/
/* MÈtodo setM da Classe Gauss atribui ÅEconstante privada _desviopadrao o valor de DesvP que recebe do metodo  */
/* Recebe como par‚metros: DesvP (valor do desvio padrao)                                                      */
/*-------------------------------------------------------------------------------------------------------------*/
void Gauss::setDP(float DesvP) {
	_desviopadrao = DesvP;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getDP da Classe Gauss que retorna o valor do desvio padrao                                     */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float Gauss::getDP() {

	return _desviopadrao;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getIntSup da Classe Gauss que retorna o valor do intervalo superior                            */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float Gauss::getIntSup() {
	return _intS;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getIntInf da Classe Gauss que retorna o valor do intervalo inferior                            */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float Gauss::getIntInf() {
	return _intI;
}

/*-------------------------------------------------------------------------------------------------------------*/
/* MÈtodo setIntSup da Classe Gauss que atribui ÅEconstante privada _intS o valor de IS que recebe do metodo    */
/* Recebe como par‚metros: IS ( intervalo superior )                                                           */
/*-------------------------------------------------------------------------------------------------------------*/
void Gauss::setIntSup(float IS) {
	_intS = IS;
}

/*-------------------------------------------------------------------------------------------------------------*/
/* MÈtodo setIntSup da Classe Gauss que atribui ÅEconstante privada _intI o valor de IF que recebe do metodo    */
/* Recebe como par‚metros: IF ( intervalo inferior )                                                           */
/*-------------------------------------------------------------------------------------------------------------*/
void Gauss::setIntInf(float IF) {
	_intI = IF;
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo getValue da Classe Gauss retorna um valor de um numero aleatÛrio dentro do intervalo dado pelo utilizador */
/* Recebe como par‚metros: Nenhum                                                                                   */
/*------------------------------------------------------------------------------------------------------------------*/
double Gauss::getValue(double mu, double sigma)
{
	const double epsilon = std::numeric_limits<double>::min();
	const double two_pi = 2.0*PI;

	static double z0, z1;
	static bool generate;
	generate = !generate;

	if (!generate)
		return z1 * sigma + mu;

	double u1, u2;
	do
	{
		u1 = rand() * (1.0 / RAND_MAX);
		u2 = rand() * (1.0 / RAND_MAX);
	} while (u1 <= epsilon);

	z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);
	z1 = sqrt(-2.0 * log(u1)) * sin(two_pi * u2);
	return z0 * sigma + mu;
}


/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo Normal da Classe Gauss retorna um valor de um numero aleatÛrio aplicado pela formula de Gauss             */
/* Recebe como par‚metros: X (valor do tipo float)                                                                  */
/*------------------------------------------------------------------------------------------------------------------*/
double Gauss::Normal(double X) {

	double temp;

	temp = 1 / sqrt(2 * PI*pow(_desviopadrao, 2))*exp(-(pow((X - _media), 2)) / (2 * pow(_desviopadrao, 2)));

	return temp;
}