#include <stdio.h>
#include <string.h>
// pos
// neg
// zero - equal

int cmp(char *, char *);
int cmp(char *str, char *str2)
{
    int compare = 0;

    if (strlen(str) != strlen(str2))
        return 1;
    else
    {
        int size = strlen(str);
        int i = 0;
        while (i < size)
        {
            if (str[i] != str2[i])
            {
                compare = 1;
                break;
            }
            i++;
        }
    }
    // if (strlen(str) != strlen(str2)){
    //     compare = 1;
    //     return compare;
    // }
    // else
    // {
    //     int size = strlen(str);
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (str[i] != str2[i])
    //         {
    //             compare = 1;
    //             break;
    //         }
    //     }
    // }
    return compare;
}

int main()
{

    char str[50];
    char str2[50];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("%d", cmp(str, str2));

    return 0;
}