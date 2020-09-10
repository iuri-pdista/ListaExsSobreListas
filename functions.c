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
	 Lista* inicioLista = (Lista*) malloc( sizeof(Lista) );
	 Lista* listPtr = (Lista*) malloc( sizeof(Lista) );
	 listPtr = inicioLista; 
	 for ( int i = 0; i < numDeElem; i++){
		(*listPtr).info = elementos[i];
		(*listPtr).proximo = (Lista*) malloc( sizeof(Lista) ); 
		listPtr = (*listPtr).proximo;
	 }
	 (*listPtr).proximo = NULL;
	 return inicioLista; 
}
