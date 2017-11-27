//**************************************************************//
// Engenharia Inform·tica - ProgramaÁ„o Orientada a Objetos     //
// Trabalho Pr·tico Final - CriaÁ„o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - SÈrgio Correia                                     //
// Frederico Balc„o - 15307                                     //
// Jo„o Cunha - 17210                                           //
//**************************************************************//

#include <iostream>
#include <cmath>
#include "PontoXY.h"

/*-----------------------------------------------*/
/* Construtor PontoXY da Classe PontoXY          */
/* Recebe como par‚metros: Nenhum                */
/*-----------------------------------------------*/
PontoXY::PontoXY()
{
	//construtor
}

/*-------------------------------------------------------------------*/
/* Metodo PontoXY da Classe PontoXY que instancia os pontos X e Y    */
/* Recebe como par‚metros: X e Y do tipo inteiro                     */
/*-------------------------------------------------------------------*/
PontoXY::PontoXY(int x, int y)
{
	_X = x;                                                                                                 //iguala a vari·vel _X do ponto ÅEvari·vel x recebida
	_Y = y;                                                                                                 //iguala a vari·vel _Y do ponto ÅEvari·vel y recebida
}

/*-----------------------------------------------*/
/* Destrutor PontoXY da Classe PontoXY           */
/* Recebe como par‚metros: Nenhum                */
/*-----------------------------------------------*/
PontoXY::~PontoXY()
{
	//destrutor
}

/*------------------------------------------------------------------------------------*/
/* Metodo printP da Classe PontoXY que mostra para o ecrÅEas coordenadas de um Ponto  */
/* Recebe como par‚metros: Nenhum                                                     */
/*------------------------------------------------------------------------------------*/
void PontoXY::printP()
{
	std::cout << "X=" << Get_X() << "   Y=" << Get_Y() << std::endl;                                        //faz print das coordenadas de um Ponto para o ecrÅE
}

/*------------------------------------------------------------------------------*/
/* Metodo distance da Classe PontoXY que calcula a distancia entre dois pontos  */
/* Recebe como par‚metros: p do tipo classe PontoXY                             */
/*------------------------------------------------------------------------------*/
float PontoXY::distance(PontoXY p)
{
	float output;                                                                                           //cria uma vari·vel float output para calcular a distancia entre os pontos

	output = (float)sqrt(((_X - p.Get_X())*(_X - p.Get_X())) + ((_Y - p.Get_Y())*(_Y - p.Get_Y())));        //calcula a distancia entre dois pontos

	return output;                                                                                          //devolve o valor da vari·vel output
}


