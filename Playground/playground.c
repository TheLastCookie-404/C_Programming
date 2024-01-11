#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    int a = 12;
    int *p = &a;
    printf("Адрес = %p \nЗнаchение %i \n", (void *) p, *p);

    int *b = malloc(sizeof(int));
    *b = 123;
    printf("Адрес = %p \nЗнаchение %i \n", (void *) b, *b);
    free(b);
    printf("Адрес = %p \nЗнаchение %i \n", (void *) b, *b);
}