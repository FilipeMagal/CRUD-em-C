#include <stdio.h>																		//Biblioteca para entrada e saida de dados como printf, scanf e puts
#include <conio.h>																		//Biblioteca usada para o gets e getche
#include <stdlib.h>																		//Biblioteca usada para system cls
#include <string.h>																		//Biblioteca usada para strcmp (comparar strings)
#include <locale.h>																		//Biblioteca usada para acentua��o
#include <unistd.h>																		//Biblioteca usada para o uso do sleep (delay no c�digo)
#include <time.h>																		//Biblioteca usada para o uso do cabe�alho (Data do acesso e hor�rio)
#define TAMANHO_MAXIMO 90																//Usando a constante s� pra falar que eu sei kkkkkk mas n vai mudar nd

//											BIBLIOTECA A CIMA
// ����������������������������������������������������������������������������������������������������������������������������������������������������������������������������
//											VARI�VEIS E FUN��ES A BAIXO
 	
//					DADOS
	char nome_Clientes [TAMANHO_MAXIMO] [100];															//Nome pedido no cadastro
	char cpf_Clientes [TAMANHO_MAXIMO][100];															//Cpf pedido no cadastro
	char rg_Clientes[TAMANHO_MAXIMO][100];																//Rg pedido no cadastro
	char situacao [TAMANHO_MAXIMO][100];																//Situa��o pedida no cadastro (Ativo ou Inativo)
	char busca [100];	  																				//Vari�vel de busca na op��o 3

void continuar(){																			//Fun��o para a continua��o do c�digo
	puts ("Aperte em qualquer tecla para continuar");
	getche();																				//C�digo para o usuario apertar qualquer tecla para continuar o programa 	
	system("cls");																			//C�digo para limpar a tela 
}
void voltar(){																				//Fun��o para voltar para o menu de op��es
	puts ("\nPara voltar para o menu de op��es, aperte qualquer tecla");					//C�digo parecido com o printf, mas senvindo apenas com caracteres (ele pula linha automaticamente)
	getche ();
}
void aguardar (){																			//Fun��o void para aguardar
	system ("cls");
	puts ("Loading.");
	sleep (1);																				//Um tipo de delay no c�digo, para demorar um pouco para aparecer a informa��o escolhida
	system("cls");
	puts ("Loading...");
	sleep(1);
	system("cls");
}

char lista  [10] [100]= {"Amanda Santos de Jesus", "Theo Santos Santana   ", "Davi Silva de Barbosa ", "Filipe Magalhaes Lima ", "Guilherme Lima Fonseca", "Haira de Jesus Almeida", "Diego Perp�tuo Andrade", "Brenda de Jesus Beato ", "Thauan Oliveira Pinto ", "Westn Melo de Souza   "},
lista2 [10] [100]= {"09203708537", "47557298635", "18963547512", "74854623514", "78945125687", "48945123465", "34256879124", "84123568497", "56235267845", "98564124563"},
lista3 [10] [100]= {"2017737583", "8413465971", "9846523546", "9845123654", "2019784568", "9458658123", "2323541356", "7451235698", "7848485692", "4815656548"},
lista4 [10] [100]= {"ATIVO", "ATIVO", "INATIVO", "ATIVO", "ATIVO", "INATIVO", "ATIVO", "INATIVO", "ATIVO", "ATIVO"};
																						//Explicar essa parte a cima depois ^^ 


char nome_Atendente [100];																//Nome pedido no login
int senha_Empresa;																		//Senha usada no login 
int cod;																				//C�digo das op��es
int i, j;																				//Contador dos dados e contador dos numeros de cadastros
int numero_Cadastro;																	//Quantidade de cadastros que pede para ser realizados
int encontrou = 0;																		//Confirma��o da busca da op��o 3
int sair;																				//Confirma��o da op��o 7 
int n1;																					//Numero do cadastro para ser escolhida para altera��o e exclus�o de dados
int n2;																					//Quantas vezes quer repetir a a��o de cima ^^

//											VARI�VEIS E FUN��ES A CIMA
// ����������������������������������������������������������������������������������������������������������������������������������������������������������������������������
//											C�DIGO A BAIXO

int main (){																			//Comando principal do c�digo                        
system("color 0A");
setlocale(LC_ALL, ""); 																	//Comando ultilizado para usar a acentua��o nos printf's

printf ("Nome do atendende (completo): ");
fflush (stdin);																			//Comando usado para limpar as entradas stdin IN de input
gets (nome_Atendente);																
printf ("Senha da empresa: ");
fflush (stdin);	
scanf ("%d", &senha_Empresa);
	
printf ("Aperte em qualquer tecla para continuar");	
getche ();																				

aguardar();																				//Uso da fun��o explicada l� em cima

if (senha_Empresa == 41123){	
				
	while (cod != 7){																	// Op��o 7 para sair do programa
		while (sair != 1){																// Confirma��o de sa�da 
		
printf ("       SISTEMA DO BANCO BTG                      \n");							//Est�tica
printf ("      =====   =====   =====                      \n");
printf ("      =   =     =     =                          \n");	    
printf ("      =====     =     =  ==                      \n");	    		
printf ("      =   =     =     =   =                      \n");				
printf ("      =====     =     =====                      \n");

				struct tm *data_Hora_Atual;												//Struct tm tem v�rias op��es para diversos tempos do proprio computador (http://linguagemc.com.br/exibindo-data-e-hora-com-time-h/)
																						//Como hora, segundo, minutos, dia, m�s e etc;
																						
				time_t segundos;														//Um tipo de fun��o da biblioteca j� estabelecida 


                time(&segundos);														//Puxar o endere�o de memoria do computador em segundos

                data_Hora_Atual = localtime(&segundos); 								//Retornando o ponteiro do tempo

                printf("Data de acesso : %d / %d / %d", data_Hora_Atual->tm_mday, data_Hora_Atual->tm_mon+1,  data_Hora_Atual->tm_year+1900);//Como dito a cima, o struct tm tem varias op��es, esse tm_mday...
                printf("\nHor�rio : %d : %d : %d", data_Hora_Atual->tm_hour, data_Hora_Atual->tm_min, data_Hora_Atual->tm_sec);//tm_hours e tm_min s�o algumas delas
				
		printf ("\n\nSeja bem vindo %s", nome_Atendente);
		puts ("\nEscolha uma das op��es\n"); 												
		
		puts ("1 � 1� parte� Cadastro de funcion�rios");								//Escolha de op��es			
		puts ("2 � 2� parte� Dados do usu�rio cadastrado anteriormente");
		puts ("3 � Pesquisa de usu�rio(espec�fico)");
		puts ("4 � Alterar informa��es do usu�rio");
		puts ("5 � Excluir informa��es do usu�rio");
		puts ("6 � Informa��es do sistema (Lista)");
		puts ("7 � Sair");
	
		printf ("\nQual op��o voc� deseja? ");
		scanf ("%d", &cod);																//V�riavel das op��es para escolher no programa

	switch (cod)
	{	
//����������������������������������������������������������������������������������������CADASTRO DE FUNCION�RIO����������������������������������������������������������������������������������������
		case 1:
			aguardar(); 
			
		
			
			puts ("Voc� escolheu: Cadastro de funcion�rios");
		
			puts ("Quantos cadastros deseja afetuar?");
			scanf ("%d", &numero_Cadastro);												//V�rivel para quantidade de cadastro
		 	
		 	aguardar();
																
			for (i=0;i<numero_Cadastro;i++){ 											//A vari�vel <i> serve para pegar os dados do cliente e colocar na matriz
													 									
					printf ("\n          O %d CADASTRO", i+1);
					puts ("\n-----------------------------");
	
					printf ("Por favor, digite o nome completo: ");
					fflush (stdin);
					scanf ("%[^.\n]s", &nome_Clientes[i]);								//Esse tipo de scanf � usado onde ele l� toda a linha at� o a quebra de linha (\n)
					
					printf ("\nAgora digite o CPF do funcionario: ");
					fflush (stdin);
		 			scanf ("%[^.\n]s", &cpf_Clientes[i]);
		
					printf ("\nDigite o RG do empregado: ");
					fflush (stdin);
					scanf ("%[^.\n]s", &rg_Clientes[i]);
					
					printf ("\nEscreva a situa��o do funcionario (ATIVO OU INATIVO): ");
					fflush (stdin);
					scanf ("%[^.\n]s", &situacao[i]);

					puts ("\n\nAperte em qualquer tecla para iniciar a analise de documentos.");
				
					aguardar();
					
					puts ("Analise conclu�da, cadastro realizado com sucesso! A senha do usu�rio � a padr�o da empresa: 41123 ");	
					continuar ();
	}
					voltar ();
					aguardar();
		break;
//�����������������������������������������������������������������������������������������DADOS DOS FUNCION�RIO���������������������������������������������������������������������������������������� 
		case 2: 
		
		aguardar();
		
		puts ("Voc� escolheu: Dados do usu�rio cadastrado anteriormente\n");
		puts ("Segue lista dos usu�rios cadastrados: \n");
		
		for (i=0; i<numero_Cadastro; i++){
		
			
				printf ("DADOS DO %d CADASTRADO\n", i+1);
		
				printf ("Nome do funcionario: %s\n", nome_Clientes [i]);
				printf ("Numero do CPF do funcion�rio: %s\n", cpf_Clientes [i]);
				printf ("Numero do RG do funcion�rio: %s\n", rg_Clientes [i]);
				printf ("Situa��o do funcion�rio: %s\n", strupr (situacao [i]));
				
				puts("Aperte em qualquer tecla para seguir");
				getche();
				system("cls");
}
				voltar ();
				aguardar();
		break;
//�����������������������������������������������������������������������������������������PESQUISA DE USU�RIO����������������������������������������������������������������������������������������		
		case 3:
				aguardar();
		
		puts ("Voc� escolheu: Pesquisa de usu�rio(espec�fico)");
		
		puts ("Digite o nome do usu�rio que quer encontrar no nosso sistema: ");
		fflush (stdin);
		gets (busca);
		
		for (i=0;i<numero_Cadastro;i++){											//Busca com os cadastrados (vai repetir todos os cadastro at� achar o nome pedido)
			if (strcmp(nome_Clientes [i], busca)== 0){
				printf ("\nNome encontrado na empresa: %s", nome_Clientes [i]);		
				encontrou = 1;
		}
	}
		if (strcmp(nome_Atendente, busca)==0){										//Busca do nome do funcion�rio que fez o login
			printf ("\nNome encontrado na empresa %s", nome_Atendente);
			encontrou=1;		
			}
		for (i=0;i<10;i++){															//Busca nas variav�is l� de cima
			if (strcmp(lista [i], busca)==0){
			printf ("\nNome encontrado no sistema");
			encontrou = 1;
		}
	}
			if(encontrou != 1){													//No if de cima fala que se a compara��o estiver certa, a variavel � = a 1
						printf("\nProcessando seu pedido");						//No de baixo fala que se for diferente de 1, ent�o a compara��o n�o est� igual
						sleep(1);
						printf("...");
						printf("\nAp�s processo, nosso sistema n�o conseguiu encontrar o funcion�rio %s no sistema", nome_Clientes [i]);
						
							}
	 	
				voltar ();
				aguardar();
		
		break;
//�����������������������������������������������������������������������������������������ALTERAR INFORMA��ES DE USU�RIO����������������������������������������������������������������������������������������		
		case 4: 
		
				aguardar();
		
		puts ("Voc� escolheu: Alterar informa��es do usu�rio");
		puts ("\nPara escolher alterar todos os dados do funcion�rio, tecle <1>:");		
		puts ("Para escolher alterar o nome do funcion�rio, tecle <2>:");
		puts ("Para escolher alterar o CPF do funcion�rio, tecle <3>:");
		puts ("Para escolher alterar o RG do funcion�rio, tecle <4>:");
		puts ("Para escolher alterar a situa��o, tecle <5>:");

		scanf ("%d", &cod);
		puts ("Quer fazer quantas altera��es? ");
		scanf ("%d", &n2);
		system ("cls");
			
			switch (cod){
				
					aguardar ();
//�����������������������������������������������������������������������������������������EDITAR TODOS OS DADOS����������������������������������������������������������������������������������������			
				case 1:
					for(i=0; i<n2;i++){													//Repetindo o processo de altera��o apartir do n�mero digitado anteriormente
						puts ("Qual cadastro vc quer alterar os dados? ");
						scanf ("%d", &n1); 												//Esse n1 � fundamental para fazer essa parte da l�gica pois se a pessoa escolher 4
																						//coloca o -1 por que a matriz da variavel escolhida para ter seus dados excluidos sempre come�am com 0
				printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
				
				puts ("Nome alterado do funcion�rio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &nome_Clientes[n1-1]);
				
				puts ("\nCPF alterado do funcion�rio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &cpf_Clientes[n1-1]);
				
				puts ("\nRG alterado do funcion�rio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &rg_Clientes[n1-1]);
				
				puts ("\nSitua��o alterada do funcion�rio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &situacao [n1-1]);
				
				printf ("\nNovo nome do funcion�rio: %s\n", nome_Clientes[n1-1]);
				printf ("Novo CPF do funcion�rio: %s\n", cpf_Clientes[n1-1]);
				printf ("Novo RG do funcion�rio: %s\n", rg_Clientes[n1-1]);
				printf ("Nova situa��o do funcion�rio: %s\n", strupr (situacao [n1-1]));
				continuar();
		}
			voltar ();
			aguardar();
			break;
//�����������������������������������������������������������������������������������������EDITAR NOME����������������������������������������������������������������������������������������		
			case 2:
				for(i=0; i<n2;i++){
					puts ("Qual cadastro vc quer alterar os dados? ");
					scanf ("%d", &n1);
				
			printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
			puts ("Nome alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &nome_Clientes[n1-1]);
			printf ("Novo nome do funcionario: %s\n", nome_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();	
				break;
//�����������������������������������������������������������������������������������������EDITAR CPF����������������������������������������������������������������������������������������				
			case 3:
				for(i=0; i<n2;i++){
					puts ("Qual cadastro vc quer alterar os dados? ");
					scanf ("%d", &n1);
				
			printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
			puts ("CPF alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &cpf_Clientes[n1-1]);
			printf ("Novo CPF do funcionario: %s\n", cpf_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();
				break;
//�����������������������������������������������������������������������������������������EDITAR RG����������������������������������������������������������������������������������������		
		case 4:
			for(i=0; i<n2;i++){
				puts ("Qual cadastro vc quer alterar os dados? ");
				scanf ("%d", &n1);
				
			printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
			puts ("RG alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &rg_Clientes[n1-1]);
			printf ("Novo RG do funcionario: %s\n", rg_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();
			

		break;
//�����������������������������������������������������������������������������������������EDITAR SITUA��O����������������������������������������������������������������������������������������		
		case 5:
			for(i=0; i<n2;i++){
				puts ("Qual cadastro vc quer alterar os dados? ");
				scanf ("%d", &n1);
				
			printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
			puts ("Situa��o alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &situacao[n1-1]);
			printf ("Novo situa��o do funcionario: %s\n", strupr (situacao[n1-1]));
			continuar();
		}
				voltar ();
				aguardar();
				break;
}
		break;
		
//�����������������������������������������������������������������������������������������EXCLUIR INFORMA��ES DE USU�RIOS����������������������������������������������������������������������������������������		
		case 5:
	
		aguardar();
		
		puts ("Voc� escolheu: Excluir informa��es do usu�rio");
		puts ("\nPara escolher excluir todos os dados do funcionario, tecle <1>:");		
		puts ("Para escolher excluir o nome do funcionario, tecle <2>:");
		puts ("Para escolher excluir o CPF do funcionario, tecle <3>:");
		puts ("Para escolher excluir o RG do funcionario, tecle <4>:");
		puts ("Para escolher excluir a situa��o, tecle <5>");

		scanf ("%d", &cod);
		puts ("Quer fazer quantas exclus�es? ");
		scanf ("%d", &n2);																//Mesma coisa do case de alterar
		system ("cls");
		
		switch(cod){
//�����������������������������������������������������������������������������������������EXCLUIR TODOS OS DADOS����������������������������������������������������������������������������������������			
		
			case 1:
					for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);	
							
						printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);											
						memset(nome_Clientes[n1-1],0,sizeof(nome_Clientes[n1-1]));  	//memset � o comando usado para excluir, logo ap�s vem a vari�vel, depois da virgula vem o parametro 
						puts ("Nome exclu�do");											//que para ser exclu�do tem q ser 0, sen�o vai aparecer varios emotes com carinha feliz
																						//depois vem o sazeof para poder armazenar novamente na vari�vel em par�nteses 
						memset (cpf_Clientes[n1-1],0,sizeof(cpf_Clientes[n1-1]));
						puts ("CPF exclu�do");
						
						memset (rg_Clientes[n1-1],0,sizeof(rg_Clientes[n1-1]));
						puts("RG exclu�do");
						
						memset (situacao[n1-1],0,sizeof(situacao[n1-1]));
						puts("Situa��o exclu�da");
						continuar();
		}
		break;
//�����������������������������������������������������������������������������������������EXCLUIR NOME����������������������������������������������������������������������������������������			
		
			case 2:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
						memset(nome_Clientes[n1-1],0,sizeof(nome_Clientes[n1-1]));
						puts ("Nome exclu�do");
						continuar();
		}
		break;
//�����������������������������������������������������������������������������������������EXCLUIR CPF����������������������������������������������������������������������������������������			
		
			case 3:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);
						memset (cpf_Clientes[n1-1],0,sizeof(cpf_Clientes[n1-1]));
						puts ("CPF exclu�do");
						continuar();
		}	
		break;
//�����������������������������������������������������������������������������������������EXCLUIR RG����������������������������������������������������������������������������������������			

			case 4:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);	
						memset (rg_Clientes[n1-1],0,sizeof(rg_Clientes[n1-1]));
						puts("RG exclu�do");
						continuar();	
		}
		break;
//�����������������������������������������������������������������������������������������EXCLUIR SITUA��O����������������������������������������������������������������������������������������			

			case 5:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n��������� O %d CADASTRADO = %s ���������\n\n\n", n1, nome_Clientes[n1-1]);	
						memset (situacao[n1-1],0,sizeof(situacao[n1-1]));
						puts("Situa��o exclu�da");
						continuar();
					}	
		voltar ();
		aguardar();
		break;
	}
	break;
		case 6:
//�����������������������������������������������������������������������������������������LISTA DO SISTEMA����������������������������������������������������������������������������������������		
		aguardar();
			
		puts ("Voc� escolheu: Informa��es do sistema (Lista)");	
		puts ("Segue lista dos funcionarios do sistemas: \n\n");
		printf ("%s%34s%20s%25s\n", "Nome", "CPF", "RG", "SITUA��O\n");					//Usado para apenas para ordenar as colunas de cima
		
		for(i=0; i<10;i++){
		printf ("%s", lista [i]); 
		printf ("%20s%20s%19s\n",lista2 [i], lista3 [i], lista4 [i]);					//Uso das 76578654864675476546 v�riaveis usada l� no inicio onde eu disse q depois iria explicar 
	}
		printf ("%s%20s%20s%19s\n", nome_Atendente, "09403708545", "2015927585", "ATIVO");
		
		for(i=0; i<numero_Cadastro;i++){
		printf ("%s%20s%20s%19s\n",nome_Clientes[i],cpf_Clientes[i],rg_Clientes[i], strupr (situacao[i])); //Uso das variv�is dos cadastrados agora nesse c�digo 
		}
		
		voltar ();
		aguardar();
	
		break;
		
		case 7:
//�����������������������������������������������������������������������������������������SAIR DO SISTEMA����������������������������������������������������������������������������������������
			puts ("Voc� quer mesmo sair? SIM-<1> N�O-<2>");
			scanf ("%d", &sair);														//Vari�vel usada no while l� no come�o do c�digo para a confirma��o para a sa�da do programa
		
			system ("cls");
			break;	
									
								
						}
					}
				}
			}
			
	else{																				
				system("cls");		
				printf("Por favor, digite a senha correta ap�s reinicializa��o");
				printf("\n");
				sleep(2);
				printf("\nReinicializa��o do sistema comen�ando em... ");	
				sleep(1);
				printf(" \n          3          ");
				sleep(1);
				printf(" \n          2          ");
				sleep(1);
				printf(" \n          1          ");
				sleep(1);
				system("cls");
				return main();			
}
}

