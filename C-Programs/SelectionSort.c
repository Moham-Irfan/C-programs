#include <stdio.h>

void main()
{   
    int sort[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Number: ");
        scanf("%d",&sort[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        int buffer = sort[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (buffer < sort[j])
            {
                sort[i] = sort[j];
                sort[j] = buffer;
                buffer = sort[i];
            }        
        }
    }

    printf("The Sorted Numbers Are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",sort[i]);
    }
        

}


