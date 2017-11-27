#pragma once
//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#ifndef HISTOGRAMA_H
#define HISTOGRAMA_H

/*-----------------------------------------------*/
/* Classe Histograma                             */
/*-----------------------------------------------*/
class Histograma
{
public:
	Histograma();                           //Construtor
	virtual ~Histograma();                  //Destrutor
	void UpdateInf(int _i);			        //constroi a informa��o realtiva aos intervalos
	void setLimInf(float x);                //coloca valor x no limite inferior do tipo float
	void setLimSup(float y);                //coloca valor y no limite superior do tipo float
	float getLimInf();                      //retorna o intervalo inferior
	float getLimSup();                      //retorna o intervalo superior
	double _Int[10][2];                     //representa a matriz, do valor do intervalo

protected:
private:
	float _LimInf;                          //para representar o intervalo inferior
	float _LimSup;                          //para representar o intervalo superior

};

#endif // HISTOGRAMA_H
