//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#include "MItem.h"

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Construtor - MItem da Classe MItem												             */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem::MItem()
{
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Destrutor - MItem da Classe MItem												                 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem::~MItem()
{
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Set_Name do tipo void que atribui o nome do objeto ao nome recebido							 */
/* Recebe como par�metros: name do tipo string                                                           */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Name(string name)
{
	_name = name;												//iguala o atributo nome do objecto ao nome recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Get_Name do tipo string que devolve o nome do objeto										     */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
string MItem::Get_Name()
{
	return _name;											//devolve o nome do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Set_Level do tipo void que atribui o nivel do objeto ao nivel recebido						 */
/* Recebe como par�metros: level do tipo int	                                                         */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Level(int level)
{
	_level = level;											//iguala o atributo nivel do objecto ao nivel recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Get_Level do tipo int que devolve o nivel do objeto					     					 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
int MItem::Get_Level()
{
	return _level;											//devolve o nivel do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Set_Op do tipo void que iguala o atributo op��o do objeto ao recebido 						 */
/* Recebe como par�metros: op do tipo string                                                             */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Op(string op)
{
	_op = op;												//iguala o atributo opcao do objecto ao recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Get_Op do tipo string que devolve a op��o do objeto											 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
string MItem::Get_Op()
{
	return _op;												//devolve a opcao do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Set_Visible do tipo void que iguala o atributo visivel do objeto ao recebido   				 */
/* Recebe como par�metros: visible do tipo bool                                                          */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Visible(bool visible)
{

	_visible = visible;										//iguala o atributo visivel do objecto ao recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Get_Visible do tipo bool que devolve o atributo visivel do objeto								 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
bool MItem::Get_Visible()
{
	return _visible;										//devolve o atributo visivel do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Set_Parent do tipo void que iguala o pai do objeto ao recebido								 */
/* Recebe como par�metros: ponteiro aux do tipo MItem                                                    */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Parent(MItem *aux)
{
	_Parent = aux;											//iguala o pai do objecto ao recebido								

}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo Get_Parent do tipo MItem que devolve o pai do objeto											 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem MItem::Get_Parent()
{
	return MItem();											//devolve o pai do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo setcall do tipo void que iguala o atributo call do objeto ao recebido  						 */
/* Recebe como par�metros: aux do tipo int                                                               */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::setcall(int aux)
{
	_call = aux;											//iguala o atributo call do objecto ao recebido

}

/*-------------------------------------------------------------------------------------------------------*/
/* M�todo getcall do tipo int que devolve o atributo call do objeto										 */
/* Recebe como par�metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
int MItem::getcall()
{
	return _call;											//devolve o atributo call do objecto
}