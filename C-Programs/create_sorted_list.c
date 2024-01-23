#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc , char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        node *n = malloc(sizeof(node));
        if (n = NULL)
        {
            return 1;
        }
        
        n -> number = atoi(argv[i]);
        n -> next = NULL;

        if (list == NULL)
        {
            list = n;
        }
        else
        {
            // node is at beginning of the list
                if (n -> number <= list -> number)
                {
                    n -> next = list ->next;
                    list = n;
                    break;
                }

            for (node *ptr = list; ptr != NULL ; ptr = ptr -> next)
            {
                
                
                // is at 
                if (n -> number <= ptr ->number )
                {
                    n -> next = ptr -> next;
                    ptr -> next = n;
                    break;
                }
                else
                {
                    ptr -> next = n;
                   // n -> next = NULL ;
                    //list = n;
                    break;
                }
                
            }
            
        }


        for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
        
        
    }
        
}