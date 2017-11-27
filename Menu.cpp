//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#include "Menu.h"

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Construtor da classe Menu																		 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
Menu::Menu()
{
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Destrutor da classe Menu																		 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
Menu::~Menu()
{
}

/*--------------------------------------------------------------------------------------------------------------------------------------*/
/* M�todo AddItem do tipo MItem que atribui aos objetos os MItem recebidos																*/
/* Recebe como par�metros: ponteiro aux do tipo MItem, name do tipo string, level do tipo int, op do tipo string e visible do tipo bool */
/*--------------------------------------------------------------------------------------------------------------------------------------*/
MItem * Menu::AddItem(MItem *aux, std::string name, int level, string op, bool visible)
{

	aux->Set_Name(name);													//atribui ao objecto MItem recebido o nome recebido
	aux->Set_Level(level);													//atribui ao objecto MItem recebido o nivel recebido
	aux->Set_Op(op);														//atribui ao objecto MItem recebido a opcao recebida
	aux->Set_Visible(visible);												//atribui ao objecto MItem recebido o valor recebido para a visibilidade no menu

	return aux;																//devolve o objecto MItem recebido
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* M�todo AddItem do tipo MItem que atribui aos objetos os MItem recebidos																												 */
/* Recebe como par�metros: ponteiro aux do tipo MItem, name do tipo string, level do tipo int, op do tipo string, visible do tipo bool, ponteiro parent do tipo MItem e call do tipo int */
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
MItem * Menu::AddItem(MItem *aux, std::string name, int level, string op, bool visible, MItem *parent, int call)
{

	aux->Set_Name(name);													//atribui ao objecto MItem recebido o nome recebido
	aux->Set_Level(level);													//atribui ao objecto MItem recebido o nivel recebido
	aux->Set_Op(op);														//atribui ao objecto MItem recebido a opcao recebida
	aux->Set_Visible(visible);												//atribui ao objecto MItem recebido o valor recebido para a visibilidade no menu
	aux->Set_Parent(parent);												//atribui ao objecto MItem recebido o pai recebido
	aux->setcall(call);														//atribui ao objecto MItem recebido a posicao recebida para a callback do objecto

	return aux;																//devolve o objecto MItem recebido
}

/*--------------------------------------------------------------------------------------*/
/* M�todo print do tipo string que devolve o nome do objeto MItem recebido				*/
/* Recebe como par�metros: ponteiro aux do tipo MItem									*/
/*--------------------------------------------------------------------------------------*/
string Menu::print(MItem *aux)
{
	return aux->Get_Name();													//devolve o nome do objecto MItem recebido
}


