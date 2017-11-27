#pragma once
//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
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
	void UpdateInf(int _i);			        //constroi a informação realtiva aos intervalos
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
