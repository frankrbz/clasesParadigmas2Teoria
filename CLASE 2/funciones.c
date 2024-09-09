#include <iostream>
#include <stdlib.h>
// FUNCIONES - PROGRAMACION I - ALEJANDRO ALVAREZ
#include <stdio.h>
#include <conio.h>

int main()
{
    int *p;
    printf("\n p ahora apunta a %p",p);

    p=(int*)malloc(4); //pide memoria prestada al SO en ejecución
    printf("\n p ahora apunta a %p",p);

    printf("\nIngrese un entero\n");
    scanf("%i",p);

    printf("El entro por dos es %d y el SO me presto memoria en %p",*p*2,p);

    free(p);
    return 0;

}