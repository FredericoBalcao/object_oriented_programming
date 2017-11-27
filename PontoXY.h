#pragma once
//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#ifndef PONTOXY_H
#define PONTOXY_H
#include "Histograma.h"
#include "Gauss.h"

/*-----------------------------------------------*/
/* Classe PontoXY                                */
/*-----------------------------------------------*/
class PontoXY : public Gauss, public Histograma
{
public:
	PontoXY();                              //construtor
	PontoXY(int, int);						//metodo PontoXY para instanciar os pontos
	virtual ~PontoXY();						//destrutor

	int Get_X() { return _X; }				//metodo Get_X que retorna o atributo _X da coordenada X
	void Set_X(int val) { _X = val; }		//metodo Set_X que recebe como par�metro uma val do tipo inteiro para instanciar o atributo _X da coordenada X
	int Get_Y() { return _Y; }				//metodo Get_Y qye retorna o atributo _Y da coordenada Y
	void Set_Y(int val) { _Y = val; }		//metodo Set_X que recebe como par�metro uma val do tipo inteiro para instanciar o atributo _Y da coordenada Y
	virtual void printP();					//faz print das coordendas X e Y de um Ponto
	virtual float distance(PontoXY);		//calcula a distancia entre dois pontos
protected:
	int _X;									//atributo _X para referenciar a coordenada X de um Ponto
	int _Y;									//atributo _Y para referenciar a coordenada Y de um Ponto
private:

};

#endif // PONTOXY_H
