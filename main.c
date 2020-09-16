#include<stdio.h>
#include<stdlib.h>
#include"functions.c"

int main(){
	// Ex1 
	Lista* listPtr = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr2 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr3 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr4 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr5 = (Lista*) malloc(sizeof(Lista));

	novoNoDaLista(listPtr, listPtr2, 10);
	novoNoDaLista(listPtr2, listPtr3, 15);
	novoNoDaLista(listPtr3, listPtr4, 17);
	novoNoDaLista(listPtr4, listPtr5, 19);
	Lista* newList = (Lista*) malloc(sizeof(Lista));
	newList = separa( listPtr, 15);
	printf("EX1\n");
	imprimeLista(newList);
	
	//EX2
	newList = concatena( listPtr, newList);
	printf("EX2\n");
	imprimeLista( newList);
	
	//EX3
	int elementos[] = {1,2,3,4};
	Lista* ponteiroLista = (Lista*) malloc( sizeof(Lista) );
	ponteiroLista = constroi( 4, elementos );
	printf("EX3\n");
	imprimeLista( ponteiroLista );	

	//EX4
	Lista* newlistPtr = (Lista*) malloc(sizeof(Lista));
	Lista* newlistPtr2 = (Lista*) malloc(sizeof(Lista));
	Lista* newlistPtr3 = (Lista*) malloc(sizeof(Lista));
	Lista* newlistPtr4 = (Lista*) malloc(sizeof(Lista));
	Lista* newlistPtr5 = (Lista*) malloc(sizeof(Lista));

	novoNoDaLista(newlistPtr, newlistPtr2, 10);
	novoNoDaLista(newlistPtr2, newlistPtr3, 15);
	novoNoDaLista(newlistPtr3, newlistPtr4, 17);
	novoNoDaLista(newlistPtr4, newlistPtr5, 19);
	newlistPtr = retiraPrefixo( newlistPtr, 2);
	printf("EX4\n");
	imprimeLista(newlistPtr);
}