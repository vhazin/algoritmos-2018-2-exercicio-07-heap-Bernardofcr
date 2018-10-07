//
//  main.c
//  Heap exercicio hazin
//
//  Created by Bernardo Russo on 04/10/18.
//  Copyright © 2018 Bernardo Russo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int valor;
    char ch;
    struct celula *proximo;
}cel;

typedef struct Fila{
    int total;
    cel *primeiro;
    cel *ultimo;
    struct Fila *proximo;
}fila;

typedef struct lista{
    int total;
    fila *primeiro;
    fila *ultimo;
}lista;

void addcel(fila *f, int i, char c){
    cel *nova=malloc(sizeof(cel));
    nova->ch=c;
    nova->valor=i;
    if (f->primeiro==NULL){
        f->primeiro=nova;
        f->ultimo=nova;
        return;
    }
    f->ultimo->proximo=nova;
    f->ultimo=nova;
    return;
}


cel heaping(){
    cel celula;
    
    return celula;
}

void addlista(lista *l,fila *f){
    l=malloc(sizeof(lista));
    if (l->primeiro==NULL){
        l->primeiro=f;
        f->proxima=NULL;
    }
    l->proxima=f;
}

int main() {
    int n,i;
    int add;
    char addchar;
    fila *f;
    lista *l;
    while (1){
        scanf ("%d",&n);
        if (n==0)
            break;
        i=0;
        while (i<n){
            if (i==0){
                addlista(l,f);
            }
            scanf ("%c/%d",&addchar,&add);
            addcel(f,add,addchar);
    
            i++;
        }
    }
    
    return 0;
}
