//**************************************************************//
// Engenharia Informática - Programação Orientada a Objetos     //
// Trabalho Prático Final - Criação de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - Sérgio Correia                                     //
// Frederico Balcão - 15307                                     //
// João Cunha - 17210                                           //
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

