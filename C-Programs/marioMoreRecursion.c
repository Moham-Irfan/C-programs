#include <stdio.h>

void hash (int h);
void space (int s);
int ht;

int main()
{
    
    printf("Height: ");
    scanf("%d",&ht);

    space(ht-1);

}

void hash (int h)
{
    if (h == ht + 1)
    {
        return;
    }
    
    else
    {
        for (int i = 0; i < h; i++)
        {
            printf("#");
        }

        printf(" ");

        for (int j = 0; j < h; j++)
        {
            printf("#");
        }

        printf("\n");
        h++;
    space(ht - h);

    }
           
}


void space (int s)
{
    if (s == -1)
    {
        return;
    }
    else
    {
        //printf("%d",s);
        
        for (int i = 0; i < s; i++)
        {
          printf(" ");
        }
    hash(ht - s);
    }
    
}