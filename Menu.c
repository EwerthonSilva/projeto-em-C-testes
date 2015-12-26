#include "Globais_Prototipos.c"

char menu(void){
	char op1;
	system("color 81");
	system("cls");
	HoraData();
	printf("\n\t\t MENU ");
	printf("\n\n\t1-Cadastro ");
	printf("\n\t2-Consulta");
	printf("\n\t3-Altera%c%co", 135, 198);
	printf("\n\t4-Exclus%co L%cgica", 198, 162);
	printf("\n\t5-Exclus%co F%csica", 198, 214);
	printf("\n\t6-Ordena%c%co", 135, 198);
	printf("\n\t7-Busca");
	printf("\n\t8-Restaurar Backup");
	printf("\n\t9-Sair");
	printf("\n\tOp%c%co:",135,198);
	
	op1=getche();
	return op1;
}
