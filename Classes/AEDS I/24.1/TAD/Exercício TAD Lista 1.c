#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[100]
} TProduto;

typedef struct celula {
    TProduto item;
    struct celula* prox;
} TCelula;

typedef struct {
    TCelula* primeiro;
    TCelula* ultimo;
    int tamanho;
} TLista;

void FLVazia(TLista *Lista){
    Lista -> primeiro = (TCelula *) malloc(sizeof(TCelula));
    Lista -> ultimo = Lista -> primeiro;
    Lista -> primeiro -> prox = NULL;
    Lista -> tamanho = 0;
}

void Inserir(TProduto x, TLista *Lista){
    Lista -> ultimo -> prox = (TCelula *) malloc(sizeof(TCelula));
    Lista -> ultimo = Lista -> ultimo -> prox;
    Lista -> ultimo -> item = x;
    Lista -> ultimo -> prox = NULL;
    Lista -> tamanho++;
}

void Imprimir(TLista Lista){
    TCelula* Aux;
    Aux = Lista.primeiro -> prox;
    while (Aux != NULL){
        printf("Codigo: %d\n Nome: %s\n", Aux -> item.codigo, Aux -> item.nome);
        Aux = Aux -> prox;
    }
}

TCelula* Pesquisar(TLista Lista, TProduto Item){
    TCelula* Aux;
    Aux = Lista.primeiro;
    while(Aux->prox != NULL){
        if(Aux->prox->item.codigo == Item.codigo)
        return Aux;
        Aux = Aux -> prox;
    }
    return NULL;
}

void Excluir(TLista *Lista, TProduto *Item){
    TCelula *Aux1, *Aux2;
    Aux1 = Pesquisar(Lista, *Item);
    if (Aux1 != NULL){
        Aux2 = Aux1 -> prox;
        Aux1 -> prox = Aux2 -> prox;
        *Item = Aux2 -> item;
        if(Aux1 -> prox == NULL)
        Lista->ultimo = Aux1;
        free(Aux2);
        Lista->tamanho--;
    }
}

void LerProduto(TProduto *produto){
    fflush(stdin);
    printf("Digite o código do produto: ");
    scanf("%d", &produto->codigo);
    fflush(stdin);
    printf("Digite o nome do produto: ");
    fgets(produto->nome, 100, stdin);
    produto->nome[strcspn(produto->nome, "\n")] = 0;
}

void ImprimirProduto(TProduto produto){
    printf("Codigo do produto: %d\n", produto.codigo);
    printf("Nome do produto: %s\n", produto.nome);
}

TCelula* PesquisarPorNome(TLista Lista, char* nome){
    TCelula* Aux = Lista.primeiro->prox;
    while (Aux != NULL){
        if (strcmp(Aux->item.nome, nome) == 0){
            return Aux;
        }
        Aux = Aux->prox;
    }
    return NULL;
}

int main() {
    TLista Lista1, Lista2;
    TProduto Item;

    FLVazia(&Lista1);
    FLVazia(&Lista2);

    for(int i=0; i < 10; i++){
    LerProduto(&Item);
    Inserir(Item, &Lista1);
    Inserir(Item, &Lista2);
}

printf("Lista 1:\n");
Imprimir(Lista1);
printf("Lista 2:\n");
Imprimir(Lista2);

Item = Lista1.primeiro->prox->prox->prox->item;
Excluir(&Lista1, &Item);

Item = Lista1.primeiro->prox->item;
Excluir(&Lista1, &Item);

Item = Lista1.primeiro->prox->prox->item;
Excluir(&Lista1, &Item);

Item = Lista1.primeiro->prox->item;
Excluir(&Lista1, &Item);

printf("Lista 1 após exclusões:\n");
Imprimir(Lista1);
printf("Lista 2 permanece inalterada:\n");
Imprimir(Lista2);

char nomePesquisa[100];
fflush(stdin);
printf("Digite o nome do produto para pesquisar: ");
fgets(nomePesquisa, 100, stdin);
nomePesquisa[strcspn(nomePesquisa, "\n")] = 0;

TCelula* encontrado = PesquisarPorNome(Lista1, nomePesquisa);
if (encontrado != NULL) {
    printf("Produto encontrado:\n");
    ImprimirProduto(encontrado->item);
} else {
    printf("Produto não encontrado.\n");
}

return 0;
}
