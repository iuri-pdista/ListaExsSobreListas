#include<stdio.h>
#include<stdlib.h>
#include"functions.c"

int main(){
	Lista* listPtr = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr2 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr3 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr4 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr5 = (Lista*) malloc(sizeof(Lista));

	inicializaNoDaLista(listPtr, listPtr2, 10);
	inicializaNoDaLista(listPtr2, listPtr3, 15);
	inicializaNoDaLista(listPtr3, listPtr4, 17);
	inicializaNoDaLista(listPtr4, listPtr5, 19);
	Lista* newList = (Lista*) malloc(sizeof(Lista));
	newList = separa( listPtr, 15);
	printf("%d", (*newList).info);
}
