//**************************************************************//
// Engenharia Inform�tica - Programa��o Orientada a Objetos     //
// Trabalho Pr�tico Final - Cria��o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - S�rgio Correia                                     //
// Frederico Balc�o - 15307                                     //
// Jo�o Cunha - 17210                                           //
//**************************************************************//

#include <stdio.h>
#include <iostream>
#include "stdafx.h"
#include "MItem.h"
#include "Menu.h"
#include "ProgHist.h"


int main()
{
	ProgHist p(120,10,100,200,0);	//instanciar p da classe ProgHist
						
	p.Run(p);						//chamar o metodo Run da classe ProgHist, que recebe como parametro o p instanciado

	system("pause");

    return 0;
}

