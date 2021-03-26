#ifndef LIVRO_H
#define LIVRO_H
typedef struct livro {
    long id;
    int paginas;
    int capitulos;
    char *titulo;
    char *descricao;
    char *author;
    struct livro *prox;
    struct livro *ant;
} Livro;
/*
    Variável do arquivo livro.h
*/
Livro *livros = NULL;
/*
    Variável do arquivo livro.h
*/
// Livro *livroInicio = NULL;

int livrosTam = 0;
#endif /*LIVRO_H*/