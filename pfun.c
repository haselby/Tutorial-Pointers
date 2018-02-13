#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *mystr, *m; //creates pointers named mystr and m
    mystr = (char*)malloc(1000); //allocate memory for 999 characters and one centinal character
    printf("Enter string here: ");
//    scanf("%s", mystr); // will read up through first space
    scanf("%[^\n]s",mystr); // will read until newline character hit
    m = mystr; // point m at same pointee as mystr (same address in memory)
    printf("%s\n",mystr);
    printf("%s\n",m);
    free(mystr);
}
