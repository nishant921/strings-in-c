// 2. Write a program to take string as an input from the user using %c and %s and confirm that the strings are equal or not.

#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100];
    printf("Enter first String: ");
    for (int i = 0; i < sizeof(str1) / sizeof(str1[0]) - 1; i++)
    {
        scanf("%c", &str1[i]);
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }
    str1[99] = '\0';

    puts(str1);

    char str2[10];
    

    printf("Enter Second String: ");
    //     %s stops at whitespace. So:
    // Nishant Chaurasia
    // with %s only reads:
    // Nishant
    // scanf("%s", &str2 );
    // scanf("%s", &str2[0] );
    scanf("%s", str2 );

    
    puts(str2);


    int equal = strcmp(str1, str2);
    if (equal == 0)
        printf("String is Equal");
    else
        printf("String is Not Equal!");

    return 0;
}