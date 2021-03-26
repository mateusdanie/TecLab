#ifndef CLIENTE_H
#define CLIENTE_H
#include "livro.h"
typedef struct cliente {
    long id;
    char *nome;
    char situacao;
    int idLivro[3];
    struct cliente *prox;
    struct cliente *ant;
} Cliente;
Cliente *cliente = NULL;
int clienteTam = 0;
#endif /*CLIENTE_H*/