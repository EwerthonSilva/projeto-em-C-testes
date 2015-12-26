#include "Globais_Prototipos.c"

void Ordenacao(void){
	if((fptr=fopen("Funcionarios.dat","rb+"))==NULL){
		printf("\n Erro");
		exit(1);
	}
	fseek(fptr,0,2);
	n=ftell(fptr)/sizeof(F);
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			fseek(fptr,i*sizeof(F),0);
			fread(&F1,sizeof(F),1,fptr);
			fseek(fptr,j*sizeof(F),0);
			fread(&F2,sizeof(F),1,fptr);
			if(F1.Cod>F2.Cod){
				fseek(fptr,i*sizeof(F),0);
				fwrite(&F2,sizeof(F),1,fptr);
				fseek(fptr,j*sizeof(F),0);
				fwrite(&F1,sizeof(F),1,fptr);
			}
		}
	}
	fclose(fptr);
	system("pause");
	system("cls");
}
