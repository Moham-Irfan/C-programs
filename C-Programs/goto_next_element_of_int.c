#include <stdio.h>

int main()
{
    int s[5] = {1,2,3,4,5};

   
    printf("Just see the difference between INT and CHAR\n\n");
    printf("INT\n");
    printf("%p\n",s);   // address of first element of array
    printf("%p\n",s+1); // address of second element of array
    printf("%p\n\n",s+2); 


    char a[4] = "HI!";
    printf("CHAR\n");
    printf("%p\n",a);   // address of first element of array
    printf("%p\n",a+1); // address of second element of array
    printf("%p\n",a+2);

    // 
}