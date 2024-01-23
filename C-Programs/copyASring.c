#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s",s);

    printf("s is : %s\n",s);

    int l = strlen(s);
    
    char *copy;     // i can even do char *copy = malloc (l+1);

    copy = malloc(l + 1); // why l + 1 ?? strlen gives length of the 
                          //string without the null character..
                          // but we need null character to make it a string
                          // that's why strlen(s) = 1
    
    for (int i = 0; i < l + 1; i++)  // again l+1 becasuse we need the null character too
    {
        copy[i] = s[i];
    }
    
    printf("The Copied string: %s",copy);
}