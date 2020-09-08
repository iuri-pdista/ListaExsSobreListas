#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int info;
	struct lista* proximo;
} Lista;

void inicializaNoDaLista( Lista* listPtr, Lista* novoNo, int infoDoNo ){
	(*listPtr).proximo = novoNo;
	(*novoNo).info = infoDoNo;
}

