#include <stdio.h>																		//Biblioteca para entrada e saida de dados como printf, scanf e puts
#include <conio.h>																		//Biblioteca usada para o gets e getche
#include <stdlib.h>																		//Biblioteca usada para system cls
#include <string.h>																		//Biblioteca usada para strcmp (comparar strings)
#include <locale.h>																		//Biblioteca usada para acentuaηγo
#include <unistd.h>																		//Biblioteca usada para o uso do sleep (delay no cσdigo)
#include <time.h>																		//Biblioteca usada para o uso do cabeηalho (Data do acesso e horαrio)
#define TAMANHO_MAXIMO 90																//Usando a constante sσ pra falar que eu sei kkkkkk mas n vai mudar nd

//											BIBLIOTECA A CIMA
// 
//											VARIΑVEIS E FUNΗΥES A BAIXO
 	
//					DADOS
	char nome_Clientes [TAMANHO_MAXIMO] [100];															//Nome pedido no cadastro
	char cpf_Clientes [TAMANHO_MAXIMO][100];															//Cpf pedido no cadastro
	char rg_Clientes[TAMANHO_MAXIMO][100];																//Rg pedido no cadastro
	char situacao [TAMANHO_MAXIMO][100];																//Situaηγo pedida no cadastro (Ativo ou Inativo)
	char busca [100];	  																				//Variαvel de busca na opηγo 3

void continuar(){																			//Funηγo para a continuaηγo do cσdigo
	puts ("Aperte em qualquer tecla para continuar");
	getche();																				//Cσdigo para o usuario apertar qualquer tecla para continuar o programa 	
	system("cls");																			//Cσdigo para limpar a tela 
}
void voltar(){																				//Funηγo para voltar para o menu de opηυes
	puts ("\nPara voltar para o menu de opηυes, aperte qualquer tecla");					//Cσdigo parecido com o printf, mas senvindo apenas com caracteres (ele pula linha automaticamente)
	getche ();
}
void aguardar (){																			//Funηγo void para aguardar
	system ("cls");
	puts ("Loading.");
	sleep (1);																				//Um tipo de delay no cσdigo, para demorar um pouco para aparecer a informaηγo escolhida
	system("cls");
	puts ("Loading...");
	sleep(1);
	system("cls");
}

char lista  [10] [100]= {"Amanda Santos de Jesus", "Theo Santos Santana   ", "Davi Silva de Barbosa ", "Filipe Magalhaes Lima ", "Guilherme Lima Fonseca", "Haira de Jesus Almeida", "Diego Perpιtuo Andrade", "Brenda de Jesus Beato ", "Thauan Oliveira Pinto ", "Westn Melo de Souza   "},
lista2 [10] [100]= {"09203708537", "47557298635", "18963547512", "74854623514", "78945125687", "48945123465", "34256879124", "84123568497", "56235267845", "98564124563"},
lista3 [10] [100]= {"2017737583", "8413465971", "9846523546", "9845123654", "2019784568", "9458658123", "2323541356", "7451235698", "7848485692", "4815656548"},
lista4 [10] [100]= {"ATIVO", "ATIVO", "INATIVO", "ATIVO", "ATIVO", "INATIVO", "ATIVO", "INATIVO", "ATIVO", "ATIVO"};
																						//Explicar essa parte a cima depois ^^ 


char nome_Atendente [100];																//Nome pedido no login
int senha_Empresa;																		//Senha usada no login 
int cod;																				//Cσdigo das opηυes
int i, j;																				//Contador dos dados e contador dos numeros de cadastros
int numero_Cadastro;																	//Quantidade de cadastros que pede para ser realizados
int encontrou = 0;																		//Confirmaηγo da busca da opηγo 3
int sair;																				//Confirmaηγo da opηγo 7 
int n1;																					//Numero do cadastro para ser escolhida para alteraηγo e exclusγo de dados
int n2;																					//Quantas vezes quer repetir a aηγo de cima ^^

//											VARIΑVEIS E FUNΗΥES A CIMA
// 
//											CΣDIGO A BAIXO

int main (){																			//Comando principal do cσdigo                        
system("color 0A");
setlocale(LC_ALL, ""); 																	//Comando ultilizado para usar a acentuaηγo nos printf's

printf ("Nome do atendende (completo): ");
fflush (stdin);																			//Comando usado para limpar as entradas stdin IN de input
gets (nome_Atendente);																
printf ("Senha da empresa: ");
fflush (stdin);	
scanf ("%d", &senha_Empresa);
	
printf ("Aperte em qualquer tecla para continuar");	
getche ();																				

aguardar();																				//Uso da funηγo explicada lα em cima

if (senha_Empresa == 41123){	
				
	while (cod != 7){																	// Opηγo 7 para sair do programa
		while (sair != 1){																// Confirmaηγo de saνda 
		
printf ("       SISTEMA DO BANCO BTG                      \n");							//Estιtica
printf ("      =====   =====   =====                      \n");
printf ("      =   =     =     =                          \n");	    
printf ("      =====     =     =  ==                      \n");	    		
printf ("      =   =     =     =   =                      \n");				
printf ("      =====     =     =====                      \n");

				struct tm *data_Hora_Atual;												//Struct tm tem vαrias opηυes para diversos tempos do proprio computador (http://linguagemc.com.br/exibindo-data-e-hora-com-time-h/)
																						//Como hora, segundo, minutos, dia, mκs e etc;
																						
				time_t segundos;														//Um tipo de funηγo da biblioteca jα estabelecida 


                time(&segundos);														//Puxar o endereηo de memoria do computador em segundos

                data_Hora_Atual = localtime(&segundos); 								//Retornando o ponteiro do tempo

                printf("Data de acesso : %d / %d / %d", data_Hora_Atual->tm_mday, data_Hora_Atual->tm_mon+1,  data_Hora_Atual->tm_year+1900);//Como dito a cima, o struct tm tem varias opηυes, esse tm_mday...
                printf("\nHorαrio : %d : %d : %d", data_Hora_Atual->tm_hour, data_Hora_Atual->tm_min, data_Hora_Atual->tm_sec);//tm_hours e tm_min sγo algumas delas
				
		printf ("\n\nSeja bem vindo %s", nome_Atendente);
		puts ("\nEscolha uma das opηυes\n"); 												
		
		puts ("1  1Ί parte Cadastro de funcionαrios");								//Escolha de opηυes			
		puts ("2  2Ί parte Dados do usuαrio cadastrado anteriormente");
		puts ("3  Pesquisa de usuαrio(especνfico)");
		puts ("4  Alterar informaηυes do usuαrio");
		puts ("5  Excluir informaηυes do usuαrio");
		puts ("6  Informaηυes do sistema (Lista)");
		puts ("7  Sair");
	
		printf ("\nQual opηγo vocκ deseja? ");
		scanf ("%d", &cod);																//Vαriavel das opηυes para escolher no programa

	switch (cod)
	{	
//CADASTRO DE FUNCIONΑRIO
		case 1:
			aguardar(); 
			
		
			
			puts ("Vocκ escolheu: Cadastro de funcionαrios");
		
			puts ("Quantos cadastros deseja afetuar?");
			scanf ("%d", &numero_Cadastro);												//Vαrivel para quantidade de cadastro
		 	
		 	aguardar();
																
			for (i=0;i<numero_Cadastro;i++){ 											//A variαvel <i> serve para pegar os dados do cliente e colocar na matriz
													 									
					printf ("\n          O %d CADASTRO", i+1);
					puts ("\n-----------------------------");
	
					printf ("Por favor, digite o nome completo: ");
					fflush (stdin);
					scanf ("%[^.\n]s", &nome_Clientes[i]);								//Esse tipo de scanf ι usado onde ele lκ toda a linha atι o a quebra de linha (\n)
					
					printf ("\nAgora digite o CPF do funcionario: ");
					fflush (stdin);
		 			scanf ("%[^.\n]s", &cpf_Clientes[i]);
		
					printf ("\nDigite o RG do empregado: ");
					fflush (stdin);
					scanf ("%[^.\n]s", &rg_Clientes[i]);
					
					printf ("\nEscreva a situaηγo do funcionario (ATIVO OU INATIVO): ");
					fflush (stdin);
					scanf ("%[^.\n]s", &situacao[i]);

					puts ("\n\nAperte em qualquer tecla para iniciar a analise de documentos.");
				
					aguardar();
					
					puts ("Analise concluνda, cadastro realizado com sucesso! A senha do usuαrio ι a padrγo da empresa: 41123 ");	
					continuar ();
	}
					voltar ();
					aguardar();
		break;
//DADOS DOS FUNCIONΑRIO 
		case 2: 
		
		aguardar();
		
		puts ("Vocκ escolheu: Dados do usuαrio cadastrado anteriormente\n");
		puts ("Segue lista dos usuαrios cadastrados: \n");
		
		for (i=0; i<numero_Cadastro; i++){
		
			
				printf ("DADOS DO %d CADASTRADO\n", i+1);
		
				printf ("Nome do funcionario: %s\n", nome_Clientes [i]);
				printf ("Numero do CPF do funcionαrio: %s\n", cpf_Clientes [i]);
				printf ("Numero do RG do funcionαrio: %s\n", rg_Clientes [i]);
				printf ("Situaηγo do funcionαrio: %s\n", strupr (situacao [i]));
				
				puts("Aperte em qualquer tecla para seguir");
				getche();
				system("cls");
}
				voltar ();
				aguardar();
		break;
//PESQUISA DE USUΑRIO		
		case 3:
				aguardar();
		
		puts ("Vocκ escolheu: Pesquisa de usuαrio(especνfico)");
		
		puts ("Digite o nome do usuαrio que quer encontrar no nosso sistema: ");
		fflush (stdin);
		gets (busca);
		
		for (i=0;i<numero_Cadastro;i++){											//Busca com os cadastrados (vai repetir todos os cadastro atι achar o nome pedido)
			if (strcmp(nome_Clientes [i], busca)== 0){
				printf ("\nNome encontrado na empresa: %s", nome_Clientes [i]);		
				encontrou = 1;
		}
	}
		if (strcmp(nome_Atendente, busca)==0){										//Busca do nome do funcionαrio que fez o login
			printf ("\nNome encontrado na empresa %s", nome_Atendente);
			encontrou=1;		
			}
		for (i=0;i<10;i++){															//Busca nas variavιis lα de cima
			if (strcmp(lista [i], busca)==0){
			printf ("\nNome encontrado no sistema");
			encontrou = 1;
		}
	}
			if(encontrou != 1){													//No if de cima fala que se a comparaηγo estiver certa, a variavel ι = a 1
						printf("\nProcessando seu pedido");						//No de baixo fala que se for diferente de 1, entγo a comparaηγo nγo estα igual
						sleep(1);
						printf("...");
						printf("\nApσs processo, nosso sistema nγo conseguiu encontrar o funcionαrio %s no sistema", nome_Clientes [i]);
						
							}
	 	
				voltar ();
				aguardar();
		
		break;
//ALTERAR INFORMAΗΥES DE USUΑRIO		
		case 4: 
		
				aguardar();
		
		puts ("Vocκ escolheu: Alterar informaηυes do usuαrio");
		puts ("\nPara escolher alterar todos os dados do funcionαrio, tecle <1>:");		
		puts ("Para escolher alterar o nome do funcionαrio, tecle <2>:");
		puts ("Para escolher alterar o CPF do funcionαrio, tecle <3>:");
		puts ("Para escolher alterar o RG do funcionαrio, tecle <4>:");
		puts ("Para escolher alterar a situaηγo, tecle <5>:");

		scanf ("%d", &cod);
		puts ("Quer fazer quantas alteraηυes? ");
		scanf ("%d", &n2);
		system ("cls");
			
			switch (cod){
				
					aguardar ();
//EDITAR TODOS OS DADOS			
				case 1:
					for(i=0; i<n2;i++){													//Repetindo o processo de alteraηγo apartir do nϊmero digitado anteriormente
						puts ("Qual cadastro vc quer alterar os dados? ");
						scanf ("%d", &n1); 												//Esse n1 ι fundamental para fazer essa parte da lσgica pois se a pessoa escolher 4
																						//coloca o -1 por que a matriz da variavel escolhida para ter seus dados excluidos sempre comeηam com 0
				printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
				
				puts ("Nome alterado do funcionαrio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &nome_Clientes[n1-1]);
				
				puts ("\nCPF alterado do funcionαrio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &cpf_Clientes[n1-1]);
				
				puts ("\nRG alterado do funcionαrio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &rg_Clientes[n1-1]);
				
				puts ("\nSituaηγo alterada do funcionαrio: ");
				fflush (stdin);
				scanf ("%[^.\n]s", &situacao [n1-1]);
				
				printf ("\nNovo nome do funcionαrio: %s\n", nome_Clientes[n1-1]);
				printf ("Novo CPF do funcionαrio: %s\n", cpf_Clientes[n1-1]);
				printf ("Novo RG do funcionαrio: %s\n", rg_Clientes[n1-1]);
				printf ("Nova situaηγo do funcionαrio: %s\n", strupr (situacao [n1-1]));
				continuar();
		}
			voltar ();
			aguardar();
			break;
//EDITAR NOME		
			case 2:
				for(i=0; i<n2;i++){
					puts ("Qual cadastro vc quer alterar os dados? ");
					scanf ("%d", &n1);
				
			printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
			puts ("Nome alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &nome_Clientes[n1-1]);
			printf ("Novo nome do funcionario: %s\n", nome_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();	
				break;
//EDITAR CPF				
			case 3:
				for(i=0; i<n2;i++){
					puts ("Qual cadastro vc quer alterar os dados? ");
					scanf ("%d", &n1);
				
			printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
			puts ("CPF alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &cpf_Clientes[n1-1]);
			printf ("Novo CPF do funcionario: %s\n", cpf_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();
				break;
//EDITAR RG		
		case 4:
			for(i=0; i<n2;i++){
				puts ("Qual cadastro vc quer alterar os dados? ");
				scanf ("%d", &n1);
				
			printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
			puts ("RG alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &rg_Clientes[n1-1]);
			printf ("Novo RG do funcionario: %s\n", rg_Clientes[n1-1]);
			continuar();
		}
				voltar ();
				aguardar();
			

		break;
//EDITAR SITUAΗΓO		
		case 5:
			for(i=0; i<n2;i++){
				puts ("Qual cadastro vc quer alterar os dados? ");
				scanf ("%d", &n1);
				
			printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
			puts ("Situaηγo alterado do funcionario: \n");
			fflush (stdin);
			scanf ("%[^.\n]s", &situacao[n1-1]);
			printf ("Novo situaηγo do funcionario: %s\n", strupr (situacao[n1-1]));
			continuar();
		}
				voltar ();
				aguardar();
				break;
}
		break;
		
//EXCLUIR INFORMAΗΥES DE USUΑRIOS		
		case 5:
	
		aguardar();
		
		puts ("Vocκ escolheu: Excluir informaηυes do usuαrio");
		puts ("\nPara escolher excluir todos os dados do funcionario, tecle <1>:");		
		puts ("Para escolher excluir o nome do funcionario, tecle <2>:");
		puts ("Para escolher excluir o CPF do funcionario, tecle <3>:");
		puts ("Para escolher excluir o RG do funcionario, tecle <4>:");
		puts ("Para escolher excluir a situaηγo, tecle <5>");

		scanf ("%d", &cod);
		puts ("Quer fazer quantas exclusυes? ");
		scanf ("%d", &n2);																//Mesma coisa do case de alterar
		system ("cls");
		
		switch(cod){
//EXCLUIR TODOS OS DADOS			
		
			case 1:
					for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);	
							
						printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);											
						memset(nome_Clientes[n1-1],0,sizeof(nome_Clientes[n1-1]));  	//memset ι o comando usado para excluir, logo apσs vem a variαvel, depois da virgula vem o parametro 
						puts ("Nome excluνdo");											//que para ser excluνdo tem q ser 0, senγo vai aparecer varios emotes com carinha feliz
																						//depois vem o sazeof para poder armazenar novamente na variαvel em parκnteses 
						memset (cpf_Clientes[n1-1],0,sizeof(cpf_Clientes[n1-1]));
						puts ("CPF excluνdo");
						
						memset (rg_Clientes[n1-1],0,sizeof(rg_Clientes[n1-1]));
						puts("RG excluνdo");
						
						memset (situacao[n1-1],0,sizeof(situacao[n1-1]));
						puts("Situaηγo excluνda");
						continuar();
		}
		break;
//EXCLUIR NOME			
		
			case 2:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
						memset(nome_Clientes[n1-1],0,sizeof(nome_Clientes[n1-1]));
						puts ("Nome excluνdo");
						continuar();
		}
		break;
//EXCLUIR CPF			
		
			case 3:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);
						memset (cpf_Clientes[n1-1],0,sizeof(cpf_Clientes[n1-1]));
						puts ("CPF excluνdo");
						continuar();
		}	
		break;
//EXCLUIR RG			

			case 4:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);	
						memset (rg_Clientes[n1-1],0,sizeof(rg_Clientes[n1-1]));
						puts("RG excluνdo");
						continuar();	
		}
		break;
//EXCLUIR SITUAΗΓO			

			case 5:
				for(i=0; i<n2;i++){
							puts ("Qual cadastro vc quer excluir os dados? ");
							scanf ("%d", &n1);
							
						printf ("\n O %d CADASTRADO = %s \n\n\n", n1, nome_Clientes[n1-1]);	
						memset (situacao[n1-1],0,sizeof(situacao[n1-1]));
						puts("Situaηγo excluνda");
						continuar();
					}	
		voltar ();
		aguardar();
		break;
	}
	break;
		case 6:
//LISTA DO SISTEMA		
		aguardar();
			
		puts ("Vocκ escolheu: Informaηυes do sistema (Lista)");	
		puts ("Segue lista dos funcionarios do sistemas: \n\n");
		printf ("%s%34s%20s%25s\n", "Nome", "CPF", "RG", "SITUAΗΓO\n");					//Usado para apenas para ordenar as colunas de cima
		
		for(i=0; i<10;i++){
		printf ("%s", lista [i]); 
		printf ("%20s%20s%19s\n",lista2 [i], lista3 [i], lista4 [i]);					//Uso das 76578654864675476546 vαriaveis usada lα no inicio onde eu disse q depois iria explicar 
	}
		printf ("%s%20s%20s%19s\n", nome_Atendente, "09403708545", "2015927585", "ATIVO");
		
		for(i=0; i<numero_Cadastro;i++){
		printf ("%s%20s%20s%19s\n",nome_Clientes[i],cpf_Clientes[i],rg_Clientes[i], strupr (situacao[i])); //Uso das varivιis dos cadastrados agora nesse cσdigo 
		}
		
		voltar ();
		aguardar();
	
		break;
		
		case 7:
//SAIR DO SISTEMA
			puts ("Vocκ quer mesmo sair? SIM-<1> NΓO-<2>");
			scanf ("%d", &sair);														//Variαvel usada no while lα no comeηo do cσdigo para a confirmaηγo para a saνda do programa
		
			system ("cls");
			break;	
									
								
						}
					}
				}
			}
			
	else{																				
				system("cls");		
				printf("Por favor, digite a senha correta apσs reinicializaηγo");
				printf("\n");
				sleep(2);
				printf("\nReinicializaηγo do sistema comenηando em... ");	
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

