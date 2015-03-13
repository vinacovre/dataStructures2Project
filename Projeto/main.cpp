/******************************************************************************* 
PROJETO 2 - Estrutura de Dados II - Ci�ncia da Computa��o (noturno)
Grupo: Vinicius Covre de Assis e Webster Lima.
Professora: Ver�nica Carvalho.
Data de entrega: 26/03/2015.
UNESP - Rio Claro.
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "functions.h"
#include "bt.h"
#include "hash.h"

int main()
{
    FILE *AP1, *AP2, *BTidx, *HASHidx;
    AbreArquivos(&AP1, &AP2, &BTidx, &HASHidx);
    
    int promoted; /* Booleano: diz se houve promo��o da p�gina */
    short int root, /* RRN da p�gina Ra�z */
              promo_rrn; /* RRN da p�gina promovida */
    int promo_chave, /* Chave promovida */
        chave; /* Pr�xima chave a ser inserida na �rvore */
         
    int key, opcao = Menu();
    while (1)
	{
	    switch(opcao)
	    {
	        case 1: CadastraCachorro(&AP2); 
                    break;
	        case 2: CadastraVacina(&AP1, &AP2, &BTidx, &HASHidx);
                    break;
			case 3: key = PerguntaChave();
                    if(ListaDados())/* Busca em Hash */
                        Hash_Pesquisa(key, HASHidx, AP2);
                    //else /* Busca em �rvore B */
			        break;
	        case 0: fclose(AP1); 
					fclose(AP2);
					fclose(BTidx);
					fclose(HASHidx);
					DeletarArquivos();
                    return 0;
	        default: printf("\nOpcao invalida!"); 
                     getch();
                     break;
        }
        opcao = Menu();
    }
}
