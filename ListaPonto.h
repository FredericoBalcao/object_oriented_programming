#pragma once
//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//


#ifndef LISTAPONTO_H
#define LISTAPONTO_H

#include "stdio.h"
#include "PontoXY.h"
#include "lista.h"


template <class Item>
class ListaPonto : public lista<Item>
{
public:
	ListaPonto()
	{
		//construtor
	}
	virtual ~ListaPonto()
	{
		//destrutor
	}
	/*----------------------------------------------------------------------------------------------*/
	/* M�todo Listar da Classe ListaPonto para listar os pontos X e Y existentes na lista na lista  */
	/* Recebe como par�metros: Nenhum                                                               */
	/*----------------------------------------------------------------------------------------------*/
	void Listar()
	{
		no<PontoXY> *aux = _inicio;                             //cria um no auxiliar para percorrer a lista
		if (aux != 0)                                           //verifica se o ponteiro auxiliar �Ediferente de 0 para saber se a lista est�Evazia
		{
			while (aux != 0)                                    //enquanto o ponteiro for diferente de 0 vai percorrer a lista e enviar para o ecr�E
			{
				aux->getPonteiroItem()->printP();               //o ponteiro auxiliar faz get ao item respectivo do no da lista e faz print
				aux = aux->getPonteiroProximo();                //avan�a o ponteiro auxiliar na lista
			}
		}
		else
		{
			cout << endl << "A Lista esta VAZIA" << endl;       //Escreve para o ecr�Ese a lista estiver vazia
		}
	}
					//lista de ListaPonto do tipo PontoXY
protected:

private:
};

#endif // LISTAPONTO_H
