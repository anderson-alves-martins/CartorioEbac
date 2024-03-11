#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()//fun�ao resgistro
{
	char arquivo[40];//criando vari�veis
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);//%s string salvando variavel
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo 'w' escreve o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //a Abrir arquivo
	fprintf(file,","); //salvando a ","
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //escreveu virgula separando no arquivo
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");//escreveu outra virgula no arquivo
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");
}

int consulta()//fun��o de consulta
{
	setlocale(LC_ALL, "Portuguese_Brazil.1252"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
		
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf); //salvando na variavel %s string
	  	
	FILE *file;
	file = fopen(cpf,"r"); //r reader 'ler'
	  	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
		
	while(fgets(conteudo, 200, file) != NULL)//enquanto
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n\n");
	}
	  	
	system ("pause");
}
	
int deletar()//fun��o deletar
{
	char cpf[40];
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);//deleta arquivo
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
}

int main()
{
	int opcao=0; //Definindo variaveis
	int laco=1;
	for(laco=1;laco=1;)
	
	{	
		system("cls"); //limpa tela	
		setlocale(LC_ALL, "Portuguese_Brazil.1252");
		
	
		printf("########  CART�RIO DE NOMES   ########\n\n");
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - REGISTRAR NOMES\n"); // \t da espaço no inicio
		printf("\t2 - CONSULTAR NOMES\n"); // \n proxima linha
		printf("\t3 - DELETAR NOMES\n");
		printf("\t4 - SAIR DO SISTEMA\n\n\n");
		printf("Op��o:");
		//printf("Esse software foi escrito por Anderson Martins \n\n");
	
		scanf("%d", &opcao); //armazena a escolha do usu�rio
		
		switch(opcao)
		{
			case 1:
			registro();//chama fun��o
			break;
			
			case 2:
			consulta();//chama fun��o
			break;
			
			case 3:
			deletar();//chama fun��o
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;
		}	
	}
 }
