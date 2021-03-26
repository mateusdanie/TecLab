#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "cliente.h"

typedef struct libary {
    Livro *livros;
    Cliente *clientes;
} Biblioteca;

void cadastrarLivro(int id, int paginas, int capitulos, char *titulo, char *descricao, char *author){
    Livro *novo = malloc(sizeof(Livro));
    novo->prox = NULL;
    novo->ant  = NULL;
    novo->id   = id;
    novo->paginas = paginas;
    novo->capitulos = capitulos;
    novo->titulo = titulo;
    novo->descricao = descricao;
    novo->author = author;
    if(livrosTam == 0){
        livros = novo;
        livros->prox = novo;
        livros->ant  = novo;
    }else if(livrosTam == 1){
        livros->prox = novo;
        livros->ant = novo;
        novo->prox = livros;
        novo->ant = livros;
    } else {
        Livro *aux = livros->ant;
        novo->ant = aux;
        novo->prox = livros;
        aux->prox = novo;
        livros->ant = novo;
    }
    livrosTam++;

}

void mostrarListaDeLivros() {
    Livro *aux = livros; 
    int i;
    for (i = 0; i < livrosTam; i++) {
        aux = aux->prox;
        printf("%d ", aux->id);
    }
}


#endif /*BIBLIOTECA_H*/