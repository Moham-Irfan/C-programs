#include <stdio.h>

void main()
{
    int start,end,years=0;

    do
    {
        printf("Start Populaiton:");
        scanf("%d",&start);
    }
    while (start < 9);
    

    do
    {
        printf("End population:");
        scanf("%d",&end);
    }
    while(start>end);
    
    
   
    while(start<end)
    {
        start = start + (start/3)-(start/4);
        years++;
    }

    printf("Years:%d",years);   
}