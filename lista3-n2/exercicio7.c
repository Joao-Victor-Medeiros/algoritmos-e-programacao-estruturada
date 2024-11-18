#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char titulo[45];
    char autor[45];
    int ano;
}LIVROS;

int completeStructureField(LIVROS *livro) 
{
    LIVROS *livroPtr = malloc(sizeof(livro));
    printf("%d", livroPtr->ano);
}

int main() 
{
    LIVROS *l1;
    // LIVROS l2 = {"", "", 0};
    l1 = malloc(sizeof(l1));
    printf("Escreva os dados dos livros: ");
    scanf("%s %s %d", l1->titulo, l1->autor, &l1->ano);

    completeStructureField(l1);
}