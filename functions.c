#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista* proximo;	
} Lista;

void imprimeLista(Lista* l){
    for(Lista*p = l; p!= NULL; p=p->proximo){
        printf("%d \n", p->info);
    }
} 

void novoNoDaLista( Lista* listPtr, Lista* novoNo, int infoDoNo ){
	(*listPtr).proximo = novoNo;
	(*novoNo).info = infoDoNo;
}

Lista* separa( Lista* listPtr, int n ){
	Lista* splitPoint = (Lista*) malloc(sizeof(Lista));
	for ( Lista* proxNo = listPtr ; (*proxNo).proximo != NULL ; proxNo = (*proxNo).proximo ){
		if( (*proxNo).info == n ){
			splitPoint = (*proxNo).proximo;
			(*proxNo).proximo = NULL;
			break;
		}
	}
	return splitPoint;
}

int isNextNull( Lista* listPtr ){
	if ( (*listPtr).proximo == NULL )
		return 1;
	else
		return 0;
}

void connectLists( Lista* list1, Lista* list2 ){
	(*list1).proximo = list2; 
}

Lista* concatena ( Lista* lista1, Lista* lista2 ){
	for ( Lista* listPtr = lista1; listPtr != NULL; listPtr = (*listPtr).proximo ){
		if( isNextNull(listPtr) == 1 ){
			(*listPtr).proximo = lista2;
			break;
		}
	}
	return lista1;
}

Lista* constroi( int numDeElem, int* elementos ){
	 Lista* inicioLista = (Lista*) malloc( sizeof(Lista) );
	 Lista* listPtr = (Lista*) malloc( sizeof(Lista) );
	 listPtr = inicioLista; 
	 for ( int i = 0; i < numDeElem; i++){
		(*listPtr).info = elementos[i];
		(*listPtr).proximo = (Lista*) malloc( sizeof(Lista) ); 
		if ( (numDeElem - i) == 1 )
			(*listPtr).proximo = NULL;
		else
			listPtr = (*listPtr).proximo;
	 }
	 return inicioLista; 
}

Lista* retiraPrefixo( Lista* listPtr, int num ){
	Lista* manipulationPtr = (Lista*) malloc( sizeof(Lista));
	for ( int i = 0; i <=  num; i++ ){
		manipulationPtr = (*listPtr).proximo;
		free(listPtr);
		listPtr = manipulationPtr;
	}
	return listPtr;
}
