// Write a program to print from 1 to 10 (or n )
// but every time you encounter a odd you add one to it
// AnD every time you encounter a even you subtract one from it


#include <stdio.h>
void odd (void);
void even (void);

int n = 1;

int main (void)
{   
    odd();
}

void odd (void)
{
    if(n <= 10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    
    return;
}

void even (void)
{
    if(n <= 10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    
    return;
}