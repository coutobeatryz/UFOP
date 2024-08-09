typedef struct {
    int codigo;
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

typedef struct celula {
    TProduto item;
    struct celula* prox;
} TCelula;

typedef struct {
    TCelula* primeiro;
    TCelula* ultimo;
    int tamanho;
} TLista;

typedef struct {
    int codigo;
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
        printf("%d\n", Aux -> item.codigo);
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

