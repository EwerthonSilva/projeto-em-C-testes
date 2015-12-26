#include "Globais_Prototipos.c"
/*Cadastro*/
void Cadastro (void){
	if((fptr=fopen("Funcionarios.dat","rb+"))==NULL)
		if((fptr=fopen("Funcionarios.dat","wb"))==NULL){
			printf("\n Erro");
			system("pause");
			exit(1);
		}
	fflush(stdin);
	printf("\n\n\t Dados do Funcion%crio:", 160);
	printf("\n\tNome: ");
	gets(F.Nome);
	fflush(stdin);
	printf("\tC%cdigo: ", 162);
	scanf("%d", &F.Cod);
	printf("\n\tSal%crio: ", 160);
	scanf("%f", &F.Sal);
	F.E=0;
	fseek(fptr,0,2);
	fwrite(&F, sizeof(F),1,fptr);
	fclose(fptr);
}
