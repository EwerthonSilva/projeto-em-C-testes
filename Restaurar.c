#include"Globais_Prototipos.c"

void Restaurar (void){
	if((fptr=fopen("Funcionarios.dat","rb+"))==NULL){
		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	if((fptrBack=fopen("Back.dat","rb"))==NULL){
			printf("\n Erro na Leitura do Arquivo");
			system("pause");
			exit(1);
	}
	fseek(fptrBack,0,0);
	while(fread(&F,sizeof(F),1,fptrBack)){
		F.E=0;
		fseek(fptr,0,2);
		fwrite(&F,sizeof(F),1,fptr);
		
	}
	fclose(fptrBack);
	fclose(fptr);
	printf("\nRestaura%c%co efetuada com sucesso\n", 135,198);
	system("pause");
	system("cls");
}
