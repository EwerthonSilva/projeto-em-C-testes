#include "Globais_Prototipos.c"

void main(void){
	do{

			op=menu();
			switch(op){
				case'1': Cadastro(); break;
				case'2': Consulta(); break;
				case'3': Alteracao(); break;
				case'4': Exclusao_Logica(); break;
				case'5': Exclusao_Fisica(); break;
				case'6': Ordenacao(); break;
				case'7': Busca(); break;
				case'8': Restaurar(); break;
				case'9': printf("\n\n\tSaindo...\n\t"); break;
				default: printf("\n\tOp%c%co Inv%clida", 135,198,160); system("pause");	
			}	

	}while(op!='9');
	
	system("pause");
}
