#include  <stdio.h>

void main()
{
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    printf("value stored in a : %d\n",a);
    printf("Address of a : %p\n",ptr1);   // address is printed in Hexadecimal
    printf("value pointed by ptr 1 : %d\n",*ptr1);
    printf("%p\n",*ptr2);   // address is printed in Hexadecimal
    printf("%d\n",**ptr2);
    printf("%d",***ptr3);

    printf("Value of a in Hexadecimal: %p",a);


}