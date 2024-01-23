#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    struct node *next;
    
}node;


int main(int argc , char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc ; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        if(i == 1)
        {
            n -> number = atoi(argv[i]);
            n -> next = NULL; 
            list = n;
        }
        else
        {
            n -> number = atoi(argv[i]);
            n -> next = list;
            list = n;
        }

        // well... really when you think about it, there is no need for if at all
        // when i = 1 , n -> next = list and n -> next = NULL are same 
        // since at that point list is NULL and only then we are updating list to n..,

        // so just have this
        //  n -> number = atoi(argv[i]);
        //    n -> next = list;
        //    list = n;    ....... no if or else needed
    }

    for (node *ptr = list; ptr != NULL ; ptr = ptr ->next )
    {
        printf("%d \n",ptr -> number);
    }
 
    
}