#include <stdio.h>  

int main()
{
    int number[10];

    for (int i = 0; i < 10; i++)
    {
        number[i] = i;
    }

    print(number);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",number[i]);
    }
    
    
}

void print (int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] += 10;
    }
    
}