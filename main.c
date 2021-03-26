#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){
    Biblioteca *biblioteca = malloc(sizeof(Biblioteca));
    cadastrarLivro(0, 5, 1, "Como fazer xxx em yyy pra ter zzz.", "aprenda a fazer xxx, em yyy para ter zzz", "João grandao");
    mostrarListaDeLivros();
}