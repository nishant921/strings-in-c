// Write your own version of strlen function from <string.h> .

#include <stdio.h>
#include <string.h>

int len(char arr[]);
int len(char arr[])
{
    int count = 0;
    // char i;
    int index = 0;
    // while(1){
    //     i = arr[index];
    //     if (i!='\0'){
    //         count++;
    //     }
    //     else break;
    //     index++;
    // }

    while (arr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

int main()
{

    char name[100];
    printf("Enter your Name: ");
    // gets(name); // mutli-word //buffer problem - undefined behavior,might crash or give garbage value.

    fgets(name, sizeof(name), stdin);

    // fgets = \n = '\0'
    // for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    // {
    //     if (name[i]=='\n'){
    //         name[i] = '\0';
    //         break;
    //     }
    // }

    // strcspn() is a function from <string.h> that finds the position of the first character in a string that matches any character from another string.
    // strcspn(str1, str2) find str2 in str1 and give index value where you find it.
    // strcspn(str, "\n") searches for '\n'.

    // It finds it at index 7, so it returns 7.

    name[strcspn(name, "\n")] = '\0';

    printf("The Length of Your Name: %d\n", len(name));
    printf("The Length of Your Name: %d\n", len("nishant nnn"));
    return 0;
}