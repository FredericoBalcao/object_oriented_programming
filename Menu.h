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


