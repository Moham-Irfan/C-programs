#include <stdio.h>
void stairs (int n);
int main ()
{
    int n;
    printf("Height: ");
    scanf("%d",&n);
    stairs(n);

}

void stairs (int n)
{
    if (n == 1)
    {   
        printf("#\n");
        //return;
    }
    else
    {
        stairs(n-1);
        for (int i = 0; i < n; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}