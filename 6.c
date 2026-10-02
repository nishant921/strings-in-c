// . Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>

int count(char str[], char str2){
    //this function work for single character all occurences count not for multiple characters
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str2 == str[i]) count++;
    }
    return count;
}

int main() {

    char name[50];
    printf("Enter your Name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    char find;
    printf("Enter Character to Find it's all occurences: ");
    scanf("%c",&find);

    printf("%d",count(name,find));
    return 0;
}
