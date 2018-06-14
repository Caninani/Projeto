#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	   char nome[51];
	   char endereco[21];
	   char telefone[12];
	   char login[21];
	   char senha[21];
}cliente;
void menu(){
	
	cliente *cadastro = (cliente *)malloc(sizeof(cliente)*100); 
	int i=0, j;
	int opcaomenu;
	char *senha= (char *)malloc(sizeof(char)*100);
	char *login= (char *)malloc(sizeof(char)*100);
	int plano;
	int opcao;
	char *Nome;
	char *Endereco;
	char *Telefone;
	char *Login;
	int opcaomensal;
	char *p, *p2;
	int resultado;
	
	printf("\n | BEM-VINDO A ACADEMIA MONÓLITOS |\n\n");
do{
	printf("\nDigite a opção desejada:\n1- para realizar o cadastro\n2- para ver sua inscrição\n3- Alterar seus dados\n4- Ver custo anual\n5- Sair\n");
	scanf("%d", &opcaomenu);
	getchar();
	switch(opcaomenu){
		case 1:
			
		printf("Digite o seu nome\n");
		scanf("%[^\n]s", cadastro[i].nome);
		getchar();
		printf("Digite seu endereço\n");
		scanf("%[^\n]s", cadastro[i].endereco);
		getchar();
		printf("Digite seu telefone\n");
		scanf("%[^\n]s", cadastro[i].telefone);
		getchar();
		printf("Digite seu login\n");
		scanf("%[^\n]s", cadastro[i].login);
		getchar();
		printf("Digite sua senha\n");
		scanf("%[^\n]s", cadastro[i].senha);
		getchar();
		printf("Seu cadastro foi realizado com sucesso!\n");
		printf("Agora escolha o plano que deseja contratar\n");
		printf("1- 25R$ por mês / 3 dias da semana à sua escolha\n2- 50R$ por mês / 5 dias na semana\n3- 70R$ por mês / 5 dias da semana + 1 mês sem mensalidade por ano\n");
		scanf("%d", &plano);
		getchar();
		break;

		case 2:
			
		printf("Digite seu login\n");
		scanf("%s", login);
		getchar();
		printf("Digite sua senha\n");
		scanf("%s", senha);
		getchar();
			for(j=0;j<100;j++){
			
				if(strcmp( login,cadastro[j].login)==0 && strcmp(senha,cadastro[j].senha)==0 ){
					Nome=cadastro[j].nome;
					Endereco=cadastro[j].endereco;
					Telefone=cadastro[j].telefone;
					Login=cadastro[j].login;
				}
		}
		printf("Aqui esta suas informações\n");
		printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s", *Nome, *Endereco, *Telefone, *Login);

		break;	 

		case 3:
			
		printf("Digite seu login\n");
		scanf("%[^\n]s", login);
		getchar();
		printf("Digite sua senha\n");
		scanf("%[^\n]s", senha);
		p=login;
		p2=senha;
		if(strcmp( p,cadastro[i].login)==0 && strcmp( p2,cadastro[i].senha)==0){
				printf("Aqui esta suas informacoes\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\nPlano: %d", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login, plano);
				printf("\nDigite oque deseja alterar\n");
				printf("1 Para nome\n2 Para endereco\n3 Para telefone\n4 Para login\n5 Para senha\n");
				scanf("%d", &opcao);
				getchar();

			if(opcao==1){
				printf("Digite seu nome\n");
				scanf("%[^\n]s", cadastro[i].nome);
				getchar();
				printf("Alterado com sucesso!\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\n", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login);
			}
			if(opcao==2){
				printf("Digite o endereco\n");
				scanf("%[^\n]s", cadastro[i].endereco);
				getchar();
				printf("Alterado com sucesso!\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\n", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login);
			}
			if(opcao==3){
				printf("Digite seu telefone\n");
				scanf("%[^\n]s", cadastro[i].telefone);
				getchar();
				printf("Alterado com sucesso!\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\n", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login);
			}
			if(opcao==4){
				printf("Digite seu novo login\n");
				scanf("%[^\n]s", cadastro[i].nome);
				getchar();
				printf("Alterado com sucesso!\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\n", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login);
			}
			if(opcao==5){
				printf("Digite sua nova senha\n");
				scanf(" %[^\n]s", cadastro[i].senha);
				getchar();
				printf("Alterado com sucesso!\n");
				printf("Nome: %s\nEndereco: %s\nTelefone: %s\nLogin: %s\n", cadastro[i].nome, cadastro[i].endereco, cadastro[i].telefone, cadastro[i].login);
		}
}
else{
				printf("Login ou Senha invalido(s)");
}
			break;

			case 4:
				
				printf("Digite qual mensalidade deseja ver:\n");
				printf("1- 35R$ por mes\n2- 50R$ por mes\n3- 70R$ por mes\n");
				scanf("%d", &opcaomensal);
				calcularvaloranual( opcaomensal, resultado);
			break;
			 	
			case 5:
				 
				opcaomenu = 5;
				system("pause");
			break;
		
			default:
				
				printf("Opcao Invalida!\n");
}
i++;
}while(opcaomenu < 5 || opcaomenu > 5);

free (senha);

free (login);

free (cadastro);

getchar();

}
//função que retorna o resultado do valor do plano que o cliente digitou para ver.
int calcularvaloranual(int opcaomensal, int resultado){
	
if(opcaomensal==3)
{
	resultado=(70*11);
}
if(opcaomensal==2)
{
	resultado=(50*12);
}
if(opcaomensal==1)
{
	resultado=(35*12);
}
printf("O valor é: %d\n", resultado);
	 return resultado;
}
void removecadastro(){

}