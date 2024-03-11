#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocação de texto por região

int main()
{
	int opcao=0; //Definindo variavel
	int laco=1;
	for(laco=1;laco=1;)
	
{
		setlocale(LC_ALL, "Portuguese_Brazil.1252");
		system("cls"); //limpa tela	
	
		printf("########  CARTÓRIO DE NOMES   ########\n\n");
		printf("Escolha a opção desejada no menu:\n\n");
		printf("\t1 - REGISTRAR NOMES\n"); // \t da espaÃ§o no inicio
		printf("\t2 - CONSULTAR NOMES\n"); // \n proxima linha
		printf("\t3 - DELETAR NOMES\n\n\n");
		printf("Opção:");
		//printf("Esse software foi escrito por Anderson Martins \n\n");
	
		scanf("%d", &opcao); //armazena a escolha do usuário
		
		switch(opcao)
		{
			case 1:
			printf("Você escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:
			printf("Você escolheu o consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Você escolheu deletar nomes!\n");
			system("pause");
			break;
			
			default:
			printf("Essa opção não está disponivel!\n");
			system("pause");
		}	
	}
 }
