#include <stdio.h>
#include <string.h>

typedef struct
{
    int n;
}
idk;


typedef struct
{
    char name [100][10];
    char number [100][20];
}
person;

int main(void)
{
    person people[2];

    strcpy(people[0].name[0] , "Carter");
    strcpy(people[0].number[0] , "+1-617-495-1000");
    strcpy(people[1].name[1] , "David");
    strcpy(people[1].number[1] , "+1-949-468-2750");

    // people[0].name[0] = "Carter";
    // people[0].number[0] = "+1-617-495-1000";

    // people[1].name[1] = "David";
    // people[1].number[1] = "+1-949-468-2750";

    // Search for name
    char search[100][100];
    printf("Name: ");
    scanf("%[^\n]s",search);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name[i], search) == 0)
        {
            printf("Found %s\n", people[i].number[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}