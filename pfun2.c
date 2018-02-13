#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *a, *b, *c;

a = malloc(sizeof(int));

*a = 5;
b = a;
c = a;

printf("Integer a = %i\n", *a);
printf("Integer b = %i\n", *b);
printf("Integer c = %i\n", *c);

*c = 7;

printf("\n");
printf("Integer a = %i\n", *a);
printf("Integer b = %i\n", *b);
printf("Integer c = %i\n", *c);

}
