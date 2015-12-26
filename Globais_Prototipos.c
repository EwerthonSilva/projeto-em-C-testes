#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
/*Janela 1*/
struct funcionario{
	char Nome[42];
	int Cod;
	float Sal;
	int E;
}F, F1, F2;

FILE *fptr;
FILE *fptrNovo;
FILE *fptrBack;

char op, opcao;
int i, n, j, codigo;

char menu(void);
void HoraData(void);
void Cadastro(void);
void Consulta(void);
void Alteracao(void);
void Exclusao_Logica (void);
void Exclusao_Fisica (void);
void Ordenacao (void);
void Busca (void);
void Restaurar (void);
