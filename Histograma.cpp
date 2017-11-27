//**************************************************************//
// Engenharia Inform·tica - ProgramaÁ„o Orientada a Objetos     //
// Trabalho Pr·tico Final - CriaÁ„o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - SÈrgio Correia                                     //
// Frederico Balc„o - 15307                                     //
// Jo„o Cunha - 17210                                           //
//**************************************************************//

#include "stdio.h"
#include "stdlib.h"
#include "Gauss.h"
#include "Histograma.h"
#include "ProgHist.h"

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo Construtor - Histograma da Classe Histograma que instancia os atributos                                   */
/* Recebe como par‚metros: Nenhum                                                                                   */
/*------------------------------------------------------------------------------------------------------------------*/
Histograma::Histograma()
{
	_LimInf = 100;
	_LimSup = 200;
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo Destrutor - Histograma da Classe Histograma                                                               */
/* Recebe como par‚metros: Nenhum                                                                                   */
/*------------------------------------------------------------------------------------------------------------------*/
Histograma::~Histograma()
{
	//dtor
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo UpdateInf da Classe Histograma que constroi a informaÁ„o realtiva aos intervalos                          */
/* Recebe como par‚metros: _i do tipo inteiro                                                                       */
/*------------------------------------------------------------------------------------------------------------------*/
void Histograma::UpdateInf(int _i)
{
	//dt calcula a largura (distancia) dos intervalos

	float dt = (_LimSup - _LimInf) / 10;
	_Int[_i][0] = _LimInf + (float)_i*dt;        //gera os valores dos intervalos por exemplo: 50 + 0*5 = 50 , 50 + 1*5 = 55
	_Int[_i][1] = _LimInf + ((float)_i + 1)*dt;

	if (_i != 9) {                               //condiÁ„o para a distancia do ultimo intervalo (alinhamento das barras)
		printf("[%.f - %.f]:  ", _Int[_i][0], _Int[_i][1]);                     //mostra os intervalos para o ecrÅE													
	}
	else {
		printf("[%.f - %.f]: ", _Int[_i][0], _Int[_i][1]);
	}
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo setLimInf da Classe Histograma que coloca o valor que recebeu no atributo do intervalo inferior           */
/* Recebe como par‚metros: x do tipo float                                                                          */
/*------------------------------------------------------------------------------------------------------------------*/
void Histograma::setLimInf(float x)
{
	_LimInf = x;
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo setLimInf da Classe Histograma que coloca o valor que recebeu no atributo do intervalo superior           */
/* Recebe como par‚metros: y do tipo float                                                                          */
/*------------------------------------------------------------------------------------------------------------------*/
void Histograma::setLimSup(float y)
{
	_LimSup = y;
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo getLimInf da Classe Histograma que retorna o valor do atributo do intervalo inferior                      */
/* Recebe como par‚metros: y do tipo float                                                                          */
/*------------------------------------------------------------------------------------------------------------------*/
float Histograma::getLimInf()
{
	return _LimInf;
}

/*------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo getLimSup da Classe Histograma que retorna o valor do atributo do intervalo superior                      */
/* Recebe como par‚metros: y do tipo float                                                                          */
/*------------------------------------------------------------------------------------------------------------------*/
float Histograma::getLimSup()
{
	return _LimSup;
}