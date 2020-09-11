#include<stdio.h>
#include<stdlib.h>
#include"functions.c"

int main(){
	// Ex1 
	/*Lista* listPtr = (Lista*) malloc(sizeof(Lista));
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
	printf("%d \n \n", (*newList).info);*/

	//EX2
	

	// EX3
	/*int elementos[] = {1,2,3,4};
	Lista* ponteiroLista = (Lista*) malloc( sizeof(Lista) );
	ponteiroLista = constroi( 4, elementos );
	printf("%d \n",(*ponteiroLista).info);*/
	

	/*EX4

	Lista* listPtr = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr2 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr3 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr4 = (Lista*) malloc(sizeof(Lista));
	Lista* listPtr5 = (Lista*) malloc(sizeof(Lista));

	novoNoDaLista(listPtr, listPtr2, 10);
	novoNoDaLista(listPtr2, listPtr3, 15);
	novoNoDaLista(listPtr3, listPtr4, 17);
	novoNoDaLista(listPtr4, listPtr5, 19);
	listPtr = retiraPrefixo( listPtr, 2);
	printf("%d", (*listPtr).info);*/
}
