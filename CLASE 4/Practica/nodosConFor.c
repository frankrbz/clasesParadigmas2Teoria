#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    char nombre[30];
    int edad;
    struct nodo *sigue;
};

int main()
{
    int i;
    struct nodo *ini=NULL,*nuevo,*aux;
    for(i=0; i<5; i++)
    {
        nuevo=malloc(sizeof(struct nodo)); //pido memoria
        printf("\nIngreso person %d",i+1);
        printf("\n\tNombre?  ");
        fflush(stdin);
        gets(nuevo->nombre);
        printf("\n\tIngrese la edad  ");
        scanf("%i",&nuevo->edad);
        printf("\n el nombre ingresado es %s",nuevo->nombre);
        printf("\n La edad es %d",nuevo->edad);
        nuevo->sigue=ini;
        ini=nuevo;
    }
    printf("\n\n\nElminación de la lista");
    i=0;
    while(ini)
    {   printf("\nLa persona en el nodo %d es   ",++i);

        puts(ini->nombre);
        aux=ini;
        ini=ini->sigue;
        free(aux);
    }
    return 0;
}