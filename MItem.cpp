//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
//**************************************************************//

#include "MItem.h"

/*-------------------------------------------------------------------------------------------------------*/
/* Método Construtor - MItem da Classe MItem												             */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem::MItem()
{
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Destrutor - MItem da Classe MItem												                 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem::~MItem()
{
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Set_Name do tipo void que atribui o nome do objeto ao nome recebido							 */
/* Recebe como parâmetros: name do tipo string                                                           */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Name(string name)
{
	_name = name;												//iguala o atributo nome do objecto ao nome recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Get_Name do tipo string que devolve o nome do objeto										     */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
string MItem::Get_Name()
{
	return _name;											//devolve o nome do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Set_Level do tipo void que atribui o nivel do objeto ao nivel recebido						 */
/* Recebe como parâmetros: level do tipo int	                                                         */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Level(int level)
{
	_level = level;											//iguala o atributo nivel do objecto ao nivel recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Get_Level do tipo int que devolve o nivel do objeto					     					 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
int MItem::Get_Level()
{
	return _level;											//devolve o nivel do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Set_Op do tipo void que iguala o atributo opção do objeto ao recebido 						 */
/* Recebe como parâmetros: op do tipo string                                                             */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Op(string op)
{
	_op = op;												//iguala o atributo opcao do objecto ao recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Get_Op do tipo string que devolve a opção do objeto											 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
string MItem::Get_Op()
{
	return _op;												//devolve a opcao do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Set_Visible do tipo void que iguala o atributo visivel do objeto ao recebido   				 */
/* Recebe como parâmetros: visible do tipo bool                                                          */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Visible(bool visible)
{

	_visible = visible;										//iguala o atributo visivel do objecto ao recebido
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Get_Visible do tipo bool que devolve o atributo visivel do objeto								 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
bool MItem::Get_Visible()
{
	return _visible;										//devolve o atributo visivel do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Set_Parent do tipo void que iguala o pai do objeto ao recebido								 */
/* Recebe como parâmetros: ponteiro aux do tipo MItem                                                    */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::Set_Parent(MItem *aux)
{
	_Parent = aux;											//iguala o pai do objecto ao recebido								

}

/*-------------------------------------------------------------------------------------------------------*/
/* Método Get_Parent do tipo MItem que devolve o pai do objeto											 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
MItem MItem::Get_Parent()
{
	return MItem();											//devolve o pai do objecto
}

/*-------------------------------------------------------------------------------------------------------*/
/* Método setcall do tipo void que iguala o atributo call do objeto ao recebido  						 */
/* Recebe como parâmetros: aux do tipo int                                                               */
/*-------------------------------------------------------------------------------------------------------*/
void MItem::setcall(int aux)
{
	_call = aux;											//iguala o atributo call do objecto ao recebido

}

/*-------------------------------------------------------------------------------------------------------*/
/* Método getcall do tipo int que devolve o atributo call do objeto										 */
/* Recebe como parâmetros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
int MItem::getcall()
{
	return _call;											//devolve o atributo call do objecto
}