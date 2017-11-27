//**************************************************************//
// Engenharia Inform·tica - ProgramaÁ„o Orientada a Objetos     //
// Trabalho Pr·tico Final - CriaÁ„o de Histogramas	            //
// Data- 01/12/2015                                             //
// Docente - SÈrgio Correia                                     //
// Frederico Balc„o - 15307                                     //
// Jo„o Cunha - 17210                                           //
//**************************************************************//

#include "stdlib.h"
#include <stdio.h>
#include  <time.h>
#include "windows.h"
#include  <conio.h>
#include "ProgHist.h"

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo Construtor - ProgHist da Classe ProgHist que instancia os atributos por default                */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
ProgHist::ProgHist(float media, float desvio, float inf, float sup, int i)
{
	_media = media;
	_desvio = desvio;
	_inf = inf;
	_sup = sup;
	_i = i;
	init();
	
}


/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo Destrutor - ProgHist da Classe ProgHist                                                        */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
ProgHist::~ProgHist()
{
	//destrutor
}


void ProgHist::callback(ProgHist& p, int aux)
{
	_callbackOP c[] = { &ProgHist::opcao01, &ProgHist::opcao02, &ProgHist::opcao03, &ProgHist::opcao04, &ProgHist::opcao05, &ProgHist::opcao06, &ProgHist::opcao07 };

	call_member_proghist(p, c[aux])();
	
}


/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo Menu da Classe ProgHist que apresenta o menu principal do programa                             */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::Menu()
{
	no<MItem> *aux = _lista2->getPonteiroInicio();                             //cria um no auxiliar para percorrer a lista
	if (aux != 0)                                           //verifica se o ponteiro auxiliar ÅEdiferente de 0 para saber se a lista estÅEvazia
	{
		while (aux != 0)                                    //enquanto o ponteiro for diferente de 0 vai percorrer a lista e enviar para o ecrÅE
		{
			cout << (aux->getPonteiroItem()->Get_Name());
			aux = aux->getPonteiroProximo();                //avanÁa o ponteiro auxiliar na lista
			
			cout << endl;									//printf("\n")
		}
	}
	else
	{
		cout << endl << "A Lista esta VAZIA" << endl;       //Escreve para o ecrÅEse a lista estiver vazia
	}
	
	
}

void ProgHist::init()
{
	M.AddItem(MI, "\t1-Definir", 1, "1", 1);
	_lista2->insere_fim(MI);
	M.AddItem(MI3, "\t\t1.1-Definir Media", 2, "1.1", 1, MI,0);
	_lista2->insere_fim(MI3);

	M.AddItem(MI4, "\t\t1.2-Definir Desvio Padrao", 2, "1.2", 1, MI,1);
	_lista2->insere_fim(MI4);

	M.AddItem(MI5, "\t\t1.3-Definir Limite Inferior", 2, "1.3", 1, MI,2);
	_lista2->insere_fim(MI5);

	M.AddItem(MI6, "\t\t1.4-Definir Limite Superior", 2, "1.4", 1, MI,3);
	_lista2->insere_fim(MI6);

	M.AddItem(MI1, "\n\t2-Gerar", 1, "2", 1);
	_lista2->insere_fim(MI1);

	M.AddItem(MI7, "\t\t2.1-Gerar Pontos", 2, "2.1", 1, MI1,4);
	_lista2->insere_fim(MI7);

	M.AddItem(MI8, "\t\t2.2-Gerar Histograma", 2, "2.2", 1, MI1,6);
	_lista2->insere_fim(MI8);

	M.AddItem(MI2, "\n\t3-Ler", 1, "3", 1);
	_lista2->insere_fim(MI2);

	M.AddItem(MI9, "\t\t3.1-Ler lista", 2, "3.1", 1, MI2,5);
	_lista2->insere_fim(MI9);

}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo Run da Classe ProgHist que permite ao utilizador escolher qual opcao que deseja do menu        */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::Run(ProgHist& p)
{
	string resp;

	while (resp != "4") {
		printf("\t***************************************************************\t\n");
		printf("\t                INSTITUTO POLITECNICO DE PORTALEGRE            \t\n");
		printf("\t               ESCOLA SUPERIOR DE TECNOLOGIA E GESTAO			 \t\n");
		printf("\t***************************************************************\t\n");
		printf("\tANO LECTIVO:       2015/2016               \tSEMESTRE: 1		 \t\n");
		printf("\tCURSO:             Engenharia Informatica (EI)\tCODIGO: 9119	 \t\n");
		printf("\tCADEIRA:           Programacao Orientada a Objetos (POO)       \t\n");
		printf("\tDOCENTE:			 Sergio Correia                              \t\n");
		printf("\tGRUPO:             3                                           \t\n");
		printf("\tNOME:              Frederico Balcao       \tNUMERO: 15307		 \t\n");
		printf("\tNOME:              Joao Cunha		\tNUMERO: 17210				 \t\n");
		printf("\t***************************************************************\t\n");
		printf("\t                CRIACAO DE HISTOGRAMAS						 \t\n");
		printf("\t                       MENU									 \t\n");
		printf("\t***************************************************************\t\n");
		Menu();                                      //chama o metodo Menu para mostrar o menu principal
		cout << "\n\t4-Sair\n";
		printf("\t***************************************************************\t\n");
		printf("\n\tOs valores predefinidos: \n\tMedia: %.f\t\tDesvio Padrao: %.f\n\tLimite Superior: %.f\tLimite Inferior: %.f\n", _media, _desvio, _sup, _inf);
		printf("\n\t-->Escolha uma opcao:  ");
		cin >> resp;

		if (resp == "1" || resp == "2" || resp == "3")
			printf("A opcao tem de ser mais especifica\nPor ex. 1.1\n");
			
		if (resp == "4") {
			printf("Saiu do Programa...\n");
			break;
		}

		no<MItem> *aux = _lista2->getPonteiroInicio();                             //cria um no auxiliar para percorrer a lista
		string aux2;
		int aux3;

		if (resp != "1" && resp != "2" && resp != "3") {
			while (aux != 0)                                    //enquanto o ponteiro for diferente de 0 vai percorrer a lista e enviar para o ecrÅE
			{
				aux2 = aux->getPonteiroItem()->Get_Op();
				if (resp == aux2) {
					aux3 = aux->getPonteiroItem()->getcall();

					callback(p, aux3);


					break;
				}
				aux = aux->getPonteiroProximo();                //avanÁa o ponteiro auxiliar na lista
			}
		}
			if (resp != aux2) {
				cout << "\nOpcao Invalida\n";
				system("pause");

			}

		
				system("cls");

	}

}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao01 da Classe ProgHist que define a media dada pelo utilizador                             */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao01()
{
	system("cls");
	float _m;                                   //variavel para guardar o valor da media dada
	printf("Opcao 1.1: Definir Media: \n");
	cin >> _m;
	G.setM(_m);                                 //define o atributo da classe Gauss pela media dada
	setmedia(_m);                               //define o atributo da classe ProgHist pela media dada
	                                     //chama o metodo Run() para voltar, o utilizador escolher a opcao desejada
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao02 da Classe ProgHist que define o desvio padrao dado pelo utilizador                     */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao02()
{
	system("cls");
	float _d;                                    //variavel para guardar o valor do desvio padrao dado
	printf("Opcao 1.2: Definir Desvio Padrao: \n");
	scanf("%f", &_d);
	G.setDP(_d);                                 //define o atributo da classe Gauss pelo desvio padrao dado
	setdesvio(_d);                               //define o atributo da classe ProgHist pelo desvio padrao dado
	                                       //chama o metodo Run() para voltar, o utilizador escolher a opcao desejada

}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao03 da Classe ProgHist que define o intervalo inferior dado pelo utilizador                */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao03()
{
	system("cls");
	float _inf;                                     //variavel para guardar o valor da media dada
	printf("Opcao 1.3: Definir Limite Inferior: \n");
	scanf("%f", &_inf);
	H.setLimInf(_inf);                              //define o atributo da classe Histograma pelo intervalo inferior dado
	setinf(_inf);                                   //define o atributo da classe ProgHist pelo intervalo inferior dado
	G.setIntInf(_inf);                              //define o atributo da classe Gauss pelo intervalo inferior dado
	                                          //chama o metodo Run() para voltar, o utilizador escolher a opcao desejada
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao04 da Classe ProgHist que define o intervalo superior dado pelo utilizador                */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao04()
{
	system("cls");
	float _sup;                                     //variavel para guardar o valor da media dada
	printf("Opcao 1.4: Definir Limite Superior: \n");
	scanf("%f", &_sup);
	H.setLimSup(_sup);                              //define o atributo da classe Histograma pelo intervalo superior dado
	setsup(_sup);                                   //define o atributo da classe ProgHist pelo intervalo superior dado
	G.setIntSup(_sup);                              //define o atributo da classe Gauss pelo intervalo superior dado
	                                          //chama o metodo Run() para voltar, o utilizador escolher a opcao desejada
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao05 da Classe ProgHist que gera pontos (coordenadas X e Y) pela distribuiÁ„o normal        */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao05()
{
	system("cls");
	printf("Opcao 2.1: Gerar Pontos (a cada 1seg)\n\n");
	gerar_ponto();                                  //gerar pontos
	                                    
}

/*------------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao06 da Classe ProgHist que permite ao utilizador ler a lista dos pontos gerados                 */
/* Recebe como par‚metros: Nenhum                                                                             */
/*------------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao06()
{
	system("cls");
	printf("Opcao 3.1: Ler Lista de Pontos Gerados\n\n");
	printf("Pontos Gerados: \n");
	_lista1->Listar();							//chama o metodo Listar da classe ListaPonto para listar os pontos existentes na lista
	system("pause");
											//chama o metodo Run() para voltar, o utilizador escolher a opcao desejada
}

/*---------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao07 da Classe ProgHist que permite ao utilizador gerar histograma baseado nos pontos gerados */
/* Recebe como par‚metros: Nenhum                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao07()
{
	system("cls");
	printf("Opcao 2.2: Gerar Histograma \n");
	criarhist();									//chama o metodo criarhist()       
	system("pause");
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo opcao00 da Classe ProgHist que mostra ao utilizador que escolheu uma opcao invalida            */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::opcao00()
{
	system("cls");
	printf("Opcao Invalida\n");
	getchar();
	system("pause");
}


/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo setmedia da Classe ProgHist que instancia a media                                              */
/* Recebe como par‚metros: media do tipo float                                                           */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::setmedia(float media)
{
	 _media = media;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo setdesvio da Classe ProgHist que instancia a desvio padrao                                     */
/* Recebe como par‚metros: desvio do tipo float                                                          */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::setdesvio(float desvio)
{
	_desvio = desvio;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo setinf da Classe ProgHist que instancia o intervalo inferior                                   */
/* Recebe como par‚metros: inf do tipo float                                                             */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::setinf(float inf)
{
	_inf = inf;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo setsup da Classe ProgHist que instancia o intervalo superior                                   */
/* Recebe como par‚metros: sup do tipo float                                                             */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::setsup(float sup)
{
	_sup = sup;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getmedia da Classe ProgHist que retorna a media                                                */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float ProgHist::getmedia()
{
	return _media;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getdesvio da Classe ProgHist que retorna o desvio padrao                                       */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float ProgHist::getdesvio()
{
	return _desvio;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getmedia da Classe ProgHist que retorna o intervalo inferior                                   */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float ProgHist::getinf()
{
	return _inf;
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo getmedia da Classe ProgHist que retorna o intervalo superior                                   */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
float ProgHist::getsup()
{
	return _sup;
}

/*--------------------------------------------------------------------------------------------------------------------------*/
/* MÈtodo gerar_ponto da Classe ProgHist que permite ao utilizador gera pontos (coordenadas X e Y) pela distribuiÁ„o normal */
/* Recebe como par‚metros: Nenhum                                                                                           */
/*--------------------------------------------------------------------------------------------------------------------------*/
void ProgHist::gerar_ponto()
{
	char op = '0';
	PontoXY *aux;
	clock_t t1 = clock();										//guarda time do processador

	while (op != '9') {
		clock_t t2 = clock(); //time actual

		if ((float)(t2 - t1) / CLOCKS_PER_SEC > 1) {
			aux = new PontoXY;									//aux serÅEum novo PontoXY
			aux->Set_X((int)aux->getValue(_media, _desvio));	//faz set ÅEcoordenada X pela media e desvio padrao dados
			aux->Set_Y((int)aux->getValue(_media, _desvio));	//faz set ÅEcoordenada Y pela media e desvio padrao dados
			_lista1->insere_fim(aux);							//guarda ponto random na lista (fim)			

			system("cls");
			printf("Clique 9 para parar\n\n");
			printf("Pontos a serem gerados: \n");

			aux->printP();										//mostra os Pontos X e Y a serem gerados			

			criarhist();


			cout << endl;
			t1 = clock();										//time actual	
		}
		if (_kbhit()) {											//retorna um inteiro diferente de zero se a chave estÅEno buffer do teclado, n„o espera atÅEuma tecla ser pressionada
			op = _getch();
		}
	}
}

/*-------------------------------------------------------------------------------------------------------*/
/* MÈtodo criarhist da Classe ProgHist que cria o histograma                                             */
/* Recebe como par‚metros: Nenhum                                                                        */
/*-------------------------------------------------------------------------------------------------------*/
void ProgHist::criarhist() {
	no<PontoXY> *aux = _lista1->getPonteiroInicio();		//primeiro ponteiro auxiliar que iguala ao ponteiro _inicio que aponta para o inicio da lista																
	no<PontoXY> *aux2 = _lista1->getPonteiroInicio();		//segundo ponteiro auxiliar que iguala ao ponteiro _inicio que aponta para o inicio da lista	
	int tam = 0, valor, itam = 0, NPontos = 500;			//variaveis auxiliares tam e valor para o limite do comprimento para a barra, e o numero de pontos 
	double temp;											//variavel temp que guarda o resultado do modulo dos pontos X e Y gerados

	if (aux == 0) {											//se nao existirem pontos na lista 
		printf("Nao existem pontos para gerar Histograma \n");
		system("pause");
	}else{
		FILE *f;
		f = fopen("Valores_Gauss.csv", "w+");
		while (aux2 != 0) {									//enquanto tiver pontos
			temp = sqrt(pow(aux2->getPonteiroItem()->Get_X(), 2) + pow(aux2->getPonteiroItem()->Get_Y(), 2));
			fprintf(f, "%d; %d; %4f\n", (aux2->getPonteiroItem()->Get_X()), (aux2->getPonteiroItem()->Get_Y()), temp);                  //guarda os valores no ficheiro
			aux2 = aux2->getPonteiroProximo();				//avanÁa o segundo ponteiro auxiliar na lista
			_numpontos++;
		}
		fclose(f);
		for (int _i = 0; _i < 10; _i++) {
			H.UpdateInf(_i);					  //faz update dos intervalos pelos valores gerados
			aux = _lista1->getPonteiroInicio();  //primeiro ponteiro auxiliar aponta para o ponteiro _inicio da lista
			if (aux != 0) {						//se a lista nao estiver vazia
				while (aux != 0) {				//enquanto tiver pontos
					temp = (sqrt(pow(aux->getPonteiroItem()->Get_X(), 2) + pow(aux->getPonteiroItem()->Get_Y(), 2)));
					if ((temp > H._Int[_i][0]) && (temp <= H._Int[_i][1]))	//se o valor gerado estiver dentro de um dado intervalo
					{
						tam++;					//incrementa a variavel tam para o numero de barras																																												
					}
					aux = aux->getPonteiroProximo(); //avanÁa o primeiro ponteiro auxiliar na lista
				}
				valor = (500 * tam) / NPontos;
				for (int i = 0; i < valor; i++) {
					printf("%c", 223);		     //mostra a barra pelo codigo ASCII 223
				}
				printf("\t\t%d Pontos", tam);
				printf("\n");
				tam = 0;						//tam inicializada a zero para quando sair do intervalo voltar a contar 
			}
		}
		printf("\nTotal Pontos: %d\n", _numpontos);
	}

	_numpontos = 0;

}

