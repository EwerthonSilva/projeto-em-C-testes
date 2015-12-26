#include "Globais_Prototipos.c"

void Consulta(void){

	if((fptr=fopen("Funcionarios.dat","rb"))==NULL){
		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	fseek(fptr,0,0);
	while(fread(&F,sizeof(F),1,fptr)){
		if(F.E==0){
			printf("\n\n\tNome:   \t%s", F.Nome);
			printf("\n\tC%cdigo: \t%d", 162, F.Cod);
			printf("\n\tSal%crio: \t%.2f\n", 160, F.Sal);
			system("pause");
		}
	}
	fclose(fptr);
	system("cls");	
}
