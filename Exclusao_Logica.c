#include"Globais_Prototipos.c"

void Exclusao_Logica (void){
	if((fptr=fopen("Funcionarios.dat","rb+"))==NULL){

		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	printf("\n Entre com o C%cdigo do Funcion%crio que Excluir logicamente: ",162, 160);
	scanf("%d",&codigo);
	fseek(fptr,0,0);
	while(fread(&F,sizeof(F),1,fptr)){
		if(F.E==0){
		
			if(F.Cod==codigo){
				F.E=1;
				fseek(fptr,ftell(fptr)-sizeof(F),0);
				fwrite(&F, sizeof(F),1,fptr);
				fseek(fptr,0,2);
			}
			
		}
		
	}
	fclose(fptr);
	
	system("cls");	

}
