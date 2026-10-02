// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice.
#include <stdio.h>

char *slice(char str[], int start, int end);
char *slice(char str[], int start, int end)
{
    int i; 

    for(i = start; i < end; i++){
        str[i-start] = str[i];
    }
    str[end-start] = '\0';
    return str;
}


int main()
{

    char name[10] = "Nishant";
    printf("%s\n",slice(name, 1, 7));
    slice(name,1,4);
    printf("%s\n",name);

    return 0;
}