#include"Globais_Prototipos.c"

void Busca(void){
	if((fptr=fopen("Funcionarios.dat","rb"))==NULL){

		printf("\n Erro na Leitura do Arquivo");
		system("pause");
		exit(1);
	}
	printf("\n Entre com o C%cdigo do Funcion%crio que deseja buscar: ",162, 160);
	scanf("%d",&codigo);
	fseek(fptr,0,0);
	while(fread(&F,sizeof(F),1,fptr)){
		if(F.E==0){
		
			if(F.Cod==codigo){
				printf("\n\n\tNome:   \t%s", F.Nome);
				printf("\n\tC%cdigo: \t%d", 162, F.Cod);
				printf("\n\tSal%crio: \t%.2f\n", 160, F.Sal);
				system("pause");
			}
		}
	}
	fclose(fptr);
	
	system("cls");	
}
