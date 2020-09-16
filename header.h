/*
19128 - Iuri Correa de Salles Barbosa
19126 - Guilherme da Costa Guatura
*/
#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

struct lista{
    int info;
    struct lista * prox;
};

typedef struct lista Lista;

Lista * inicializa();
int vazia (Lista* l);
void imprime (Lista* l);
void connectLists( Lista* list1, Lista* list2 )ç
Lista* insere (Lista* l, int i);
void novoNoDaLista( Lista* listPtr, Lista* novoNo, int infoDoNo );
Lista * separa(Lista * l, int n);
Lista * concatena (Lista * l1, Lista* l2);
Lista * constroi (int n, int* v);
Lista * retira_prefixo (Lista * l, int n);

#endif // FUNCOES_H_INCLUDED
