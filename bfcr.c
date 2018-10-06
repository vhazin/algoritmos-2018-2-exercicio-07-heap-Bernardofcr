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
}cel;

typedef struct Fila{
    int total;
    cel **primeiro;
}fila;

void addcel(){
    
}

cel heaping(){
    cel celula;
    
    return celula;
}

/*
void addlista(fila *lista, cel c){
    *c
    lista=malloc(sizeof (fila));
    lista->total=lista->total+1;
    lista->primeiro;
}
*/

int main() {
    int n,i;
    while (1){
        scanf ("%d",&n);
        if (n==0)
            break;
        i=0;
        cel c[n];
        while (i<n){
            scanf ("%c/%d",&c[i].ch,&c[i].valor);
            
        }
    }
    
    return 0;
}
