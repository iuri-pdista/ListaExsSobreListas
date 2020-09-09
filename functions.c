typedef struct lista{
	int info;
	struct lista* proximo;	
} Lista;

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

Lista* constroi( int numDeElem, int* elementos ){
	Lista* novaLista = (Lista*) malloc( sizeof(Lista) );
	for ( int i = 0; i < numDeElem; i++ ){
		(*novaLista).info = elementos[i];
	}
	return novaLista;
}
