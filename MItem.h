//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
//**************************************************************//

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "lista.h"

using namespace std;

/*-----------------------------------------------*/
/* Classe MItem                                  */
/*-----------------------------------------------*/
class MItem
{
public:
	MItem();								//constructor da classe MItem
	~MItem();								//destructor da classe MItem

	void Set_Name(string name);				//metodo para atribuir nome a objectos da classe MItem
	string Get_Name();						//mete para obter o nome de objectos da classe MItem
	void Set_Level(int level);				//metodo para atribuir nivel a objectos da classe MItem
	int Get_Level();						//metodo para obter o nivel de objectos de classe MItem
	void Set_Op(string op);					//metodo para atribuir a opcao especifica a cada objecto MItem
	string Get_Op();						//metodo para obter a opcao do MItem
	void Set_Visible(bool visible);			//metodo para atribuir o estado visivel do objecto MItem
	bool Get_Visible();						//metodo para obter o estado visivel do objecto MItem
	void Set_Parent(MItem *aux);			//metodo para atribuir objecto pai a outro objecto MItem
	MItem Get_Parent();						//metodo para obter o objecto pai de um objecto MItem

	void setcall(int aux);					//metodo para atribuir ao objecto a posicao dentro de um array para a callback
	int getcall();							//metodo para obter a posicao da callback
private:
	string _name;							//nome do objecto
	int _level;								//nivel no menu do objecto
	string _op;								//opcao especifica do objecto
	bool _visible;							//visibilidade do objecto no menu
	MItem* _Parent;							//objecto pai	
	int _call;								//posicao utilizada para a callback
};



