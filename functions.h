typedef struct lista{
    int info;
    struct lista* proximo;
} Lista;

void novoNoDaLista( Lista* listPtr, Lista* novoNo, int infoDoNo );

Lista* separa( Lista* listPtr, int n );

Lista* concatena ( Lista* lista1, Lista* lista2 );

Lista* constroi( int numDeElem, int* elementos );

Lista* retiraPrefixo( Lista* listPtr, int num );

void imprimeLista(Lista* l);
