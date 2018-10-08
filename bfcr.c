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
    struct celula *esq;
    struct celula *dir;
}cel;
/*
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

void addlista(lista *l,fila *f){
    cel *cl=malloc(sizeof(cel));
    
    if (l->primeiro==NULL){
        l->primeiro=f;
        f->proximo=NULL;
    }
    l->ultimo->proximo=f;
    l->ultimo=f;
}*/

void addcel(cel *c,int i, char chr){
    if (c==NULL){
        c=malloc(sizeof(cel));
        c->valor=i;
        c->ch=chr;
        c->esq=NULL;
        c->dir=NULL;
        return;
    }
   if(i<c->valor)
        addcel(c->esq,i,chr);
    else
        addcel(c->dir,i,chr);
    return;
}

void printar (cel *c){
    if (c==NULL)
        return;
    printf("(");
    printar (c->esq);
    printf("%c/%d",c->ch,c->valor);
    printar (c->dir);
    printf (")");
}


int main() {
    int n,i;
    int add;
    char addchar;
    cel *f;
    while (1){
        scanf ("%d",&n);
        f=NULL;
        if (n==0)
            return 0;
        i=0;
        while (i<n){
            scanf ("%c/%d",&addchar,&add);
            addcel(f,add,addchar);
            i++;
        }
        printar(f);
        printf("\n");
    }
    
    return 0;
}

