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

Lista* separa( Lista* listPtr, int n ){
	Lista* splitPoint = NULL;
	printf( "%d",(*listPtr).info );
	for ( Lista* proxNo ; (*proxNo).proximo != NULL ; proxNo = (*proxNo).proximo ){
		if( (*proxNo).info == n ){
			splitPoint = (*proxNo).proximo;
			break;
		}
	}
	return splitPoint;
}
