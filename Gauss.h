#pragma once
//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
//**************************************************************//

#ifndef GAUSS_H
#define GAUSS_H

/*-----------------------------------------------*/
/* Classe Gauss                                  */
/*-----------------------------------------------*/
class Gauss
{
public:
	//metodos publicos utilizados da Classe Gauss
	Gauss();                                    //Construtor
	virtual ~Gauss();                           //Destrutor
	Gauss(float media, float desvio_padrao, float inter_inf, float inter_sup); //instancia os atributos do metodo Gauss
	void setM(float M);                         //coloca valor na media do tipo float
	float getM();                               //retorna a media
	void setDP(float DesvP);                    //coloca valor no desvio padrao do tipo float
	float getDP();                              //retorna o desvio padrao
	float getIntSup();                          //retorna o intervalo superior
	float getIntInf();                          //retorna o intervalo inferior
	void setIntSup(float IS);                   //coloca valor no intervalo superior do tipo float
	void setIntInf(float IF);                   //coloca valor no intervalo inferior do tipo float
	double Normal(double X);                      //calcula a formula pelo valor X gerado
	double getValue(double mu, double sigma);    //calcula o valor gerado
protected:
private:
	//atributos utilizados da Classe Gauss
	float _X;                                   //para representar o valor gerado aplicado na formula
	float _media;                               //para representar a media
	float _desviopadrao;                        //para representar o desvio padrao
	float _intS;                                //para representar o intervalo superior
	float _intI;                                //para representar o intervalo inferior
};

#endif // GAUSS_H
