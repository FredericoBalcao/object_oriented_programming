#pragma once
//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
//**************************************************************//

#ifndef PROGHIST_H
#define PROGHIST_H
#include "Histograma.h"
#include "ListaPonto.h"
#include "Gauss.h"
#include "Menu.h"

#define call_member_proghist(object,ptr) ((object).*(ptr))

using namespace std;
/*-----------------------------------------------*/
/* Classe ProgHist                               */
/*-----------------------------------------------*/
class ProgHist
{
public:
	//metodos publicos utilizados da Classe ProgHist
	ProgHist(float media, float desvio, float inf, float sup,int i);                         //construtor da Classe ProgHist
	virtual ~ProgHist();

	void Run(ProgHist& p);              //permite ao utilizador escolher qual opcao que deseja do menu
	void setmedia(float media);         //coloca valor na media do tipo float
	void setdesvio(float desvio);       //coloca valor no desvio padrao do tipo float
	void setinf(float inf);             //coloca valor no intervalo inferior do tipo float
	void setsup(float sup);             //coloca valor no intervalo superior do tipo float
	void criarhist();                   //gera histograma baseado nos valores aleatórios gerados
	float getmedia();                   //retorna a media
	float getdesvio();                  //retorna o desvio padrao
	float getinf();                     //retorna o intervalo inferior
	float getsup();                     //retorna o intervalo superior
	void gerar_ponto();					//gera ponto X e Y a cada 1 seg
                   //opcao invalida
	void init();
	typedef void(ProgHist::*_callbackOP)();
	void callback(ProgHist& p, int call);

protected:
private:
										//Instancias privadas da Classe Gauss e Histograma
	Gauss G;                            //para instanciar qualquer metodo da classe Gauss
	Histograma H;                       //para instanciar qualquer metodo da classe Histograma
	PontoXY P;							//para instanciar qualquer metodo da classe PontoXY
	ListaPonto<PontoXY> *_lista1 = new ListaPonto<PontoXY>;				//lista de ListaPonto do tipo PontoXY
	lista<MItem> *_lista2 = new lista<MItem>;						//lista do tipo MItem


	Menu M;
	MItem	*MI = new MItem, *MI1 = new MItem, *MI2 = new MItem, //pais
		*MI3 = new MItem, *MI4 = new MItem, *MI5 = new MItem, *MI6 = new MItem, *MI7 = new MItem, *MI8 = new MItem, *MI9 = new MItem; //filhos
	//atributos utilizados da Classe ProgHist
	float _media;                       //para representar a media
	float _desvio;                      //para representar a desvio padrao
	float _inf;                         //para representar o intervalo inferior
	float _sup;                         //para representar o intervalo superior
	int _i;                             //para ser usado para o calculo dos intervalos e tambem para o metodo updateinf
	void opcao01();                     //para definir a media
	void opcao02();                     //para definir o desvio padrao
	void opcao03();                     //para definir o intervalo inferior
	void opcao04();                     //para definir o intervalo superior
	void opcao05();                     //para gerar pontos a cada 1 seg
	void opcao06();                     //para ler lista de pontos gerados
	void opcao07();						//para gerar histograma
	void opcao00();  
	int _numpontos = 0;									
	void Menu();                        //menu principal
};

#endif // PROGHIST_H
