//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "MItem.h"

using namespace std;

/*-----------------------------------------------*/
/* Classe Menu                                   */
/*-----------------------------------------------*/
class Menu
{
public:
	Menu();
	~Menu();

	MItem* AddItem(MItem *aux, std::string name, int level, string op, bool visible);								//metodo para adicionar objectos MItem pais ao Menu
	MItem* AddItem(MItem *aux, std::string name, int level, string op, bool visible, MItem *parent, int call);		//metodo para adicionar objectos MItem filhos ao Menu

	string print(MItem *aux);																						//metodo para escrever no ecra os objectos MItem do	Menu

private:
	/*	char LastOp;
	int NItem;
	string Header;*/
	int aux3;
};


