#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o

int main()
{
	int opcao=0; //Definindo variavel
	int laco=1;
	for(laco=1;laco=1;)
	
{
		setlocale(LC_ALL, "Portuguese_Brazil.1252");
		system("cls"); //limpa tela	
	
		printf("########  CART�RIO DE NOMES   ########\n\n");
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - REGISTRAR NOMES\n"); // \t da espaço no inicio
		printf("\t2 - CONSULTAR NOMES\n"); // \n proxima linha
		printf("\t3 - DELETAR NOMES\n\n\n");
		printf("Op��o:");
		//printf("Esse software foi escrito por Anderson Martins \n\n");
	
		scanf("%d", &opcao); //armazena a escolha do usu�rio
		
		switch(opcao)
		{
			case 1:
			printf("Voc� escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:
			printf("Voc� escolheu o consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Voc� escolheu deletar nomes!\n");
			system("pause");
			break;
			
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
		}	
	}
 }
