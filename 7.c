// Write a program to check  whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

void instr(char str[], char s){

    int present = 0;
    int index;

    for (int i = 0; i < strlen(str); i++)
    {
        if (s == str[i])
        {
            present = 1;
            index = i;
            break;
        }

        
    }
    if (present==0) printf("%c is present in given string at index: %d.\n",s,index);
    else printf("%c is not present in given string.\n",s);
    

}

int main() {

    char str[50];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char find;
    printf("Enter Character to Find if it is present in the string or not:");
    scanf("%c",&find);

    instr(str,find);
    
    return 0;
}