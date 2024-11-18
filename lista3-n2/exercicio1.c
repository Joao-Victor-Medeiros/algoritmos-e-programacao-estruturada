#include <stdio.h>

typedef struct {
    char titulo[45];
    char autor[45];
    char editora[45];
    int ano;
}LIVRO;

int main() 
{
    LIVRO livro = {"crime e castigo", "fiodor dostoievski", "editora 34", 1870};
    printf("%s %s %s %d\n", livro.titulo, livro.autor, livro.editora, livro.ano);
}