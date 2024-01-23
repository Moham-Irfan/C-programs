#include <stdio.h>

int main ()
{
    char *s = "Irfan";

    printf("\n%p\n",s);
    printf("%p\n",s+1);
    printf("%p\n\n",s+3);

    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c\n",*(s+3));
    printf("%c\n",*(s+4));
}