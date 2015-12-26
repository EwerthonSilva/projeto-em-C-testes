#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Usuario{
	char Nome[30];
	char Senha[12];
	int E;
};

void main(void){
	char user[30], senha[20];
	struct Usuario U1[10000], U;
	FILE *fptr;
	int n, i,j, o;
	
/*	user[0]=getch();
	printf("%d",user[0]);
*/	printf("\n\t\t Menu");
	printf("\n\t1-Cadastrar\n\t2-Entrar\n\t\t");
	scanf("%d",&o);
	switch (o){
		case 1:
			system("cls");
			if((fptr=fopen("Usuarios.dat","wb"))==NULL){
				printf("\n Erro ao criar o Arquivo de Usuários");
				system("pause");
				exit(1);
			}
			fflush(stdin);
			printf("\n\n\t Cadastro de Usu%crio:", 160);
			printf("\n\tNome: ");
			gets(U.Nome);
			fflush(stdin);
			printf("\n\tSenha: ", 160);
			for(i=0;i<12&&U.Senha[i-1]!=13;){
				U.Senha[i]=getch();
				if((U.Senha[i]!=13)&&(U.Senha[i]!=8)){
					printf("*");
					i++;
				}
				else
					if(U.Senha[i]==13)
						i++;
					else
						if((U.Senha[i]==8)&&(i>0)){
							U.Senha[i]='\0';
							i--;
							system("cls");
							printf("\n\n\t Cadastro de Usu%crio:", 160);
							printf("\n\tUsu%crio: %s\n", 160, U.Nome);
							printf("\n\tSenha: ");
							for(j=0;j<i;j++)
								printf("*");
						}
			}
			U.E=0;
			fseek(fptr,0,2);
			fwrite(&U, sizeof(U),1,fptr);
			fclose(fptr);
			break;
			
		case 2:
			system("cls");
			if((fptr=fopen("Usuarios.dat","rb+"))!=NULL){
				fseek(fptr,0,2);
				n=ftell(fptr)/sizeof(U);
				fseek(fptr,0,0);
				fread(&U1,sizeof(U),n,fptr);
				fflush(stdin);
				printf("\n\tUsu%crio: ", 160);
				gets(user);
				
				printf("\n\tSenha: ", 160);
				for(i=0;i<12&&senha[i-1]!=13;){
					senha[i]=getch();
					if((senha[i]!=13)&&(senha[i]!=8)){
						printf("*");
						i++;
					}
					else
						if(senha[i]==13)
							i++;
						else
							if((senha[i]==8)&&(i>0)){
								senha[i]='\0';
								i--;
								system("cls");
								printf("\n\tUsu%crio: %s\n", 160, user);
								printf("\n\tSenha: ");
								for(j=0;j<i;j++)
									printf("*");
							}
				}
				
				for(i=0;i<n;i++){
					if(U1[i].E==0){
						if(strcmp(U1[i].Nome,user)==0){
							if(strcmp(U1[i].Senha,senha)==0)
						 		printf("\ns\n");
						}
						else
							printf("\n Usu%crio ou Senha incorreto\n",160);
					}
					else
						printf("\n Usu%crio n%co localizado",160, 198);
				}
			
			}
			break;
				default: printf("\n Op%c%co Inv%clida", 135,198,160);
	}	
	system("pause");
}
