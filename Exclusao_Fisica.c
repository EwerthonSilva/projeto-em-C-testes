#include"Globais_Prototipos.c"

void Exclusao_Fisica(void){
	
	
	if((fptr=fopen("Funcionarios.dat","rb"))==NULL){
		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	if((fptrNovo=fopen("Novo.dat","wb"))==NULL){
		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	if((fptrBack=fopen("Back.dat","rb+"))==NULL)
		if((fptr=fopen("Back.dat","wb"))==NULL){
			printf("\n Erro na Leitura do Arquivo");
			system("pause");
			exit(1);
		}
	fseek(fptr,0,0);
	while(fread(&F,sizeof(F),1,fptr)){
		if(F.E==0){
			fseek(fptrNovo,0,2);
			fwrite(&F,sizeof(F),1,fptrNovo);
		}
		else{
			fseek(fptrBack,0,2);
			fwrite(&F,sizeof(F),1,fptrBack);
		}

	}
	fclose(fptr);
	fclose(fptrNovo);
	fclose(fptrBack);
	remove("Funcionarios.dat");
	rename("Novo.dat","Funcionarios.dat");

	
	system("cls");	

}
