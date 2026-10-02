// Write a program to encrypt a string by adding 1 to the ASCII value of its characters
// ALSO decrpyt it
#include <stdio.h>
#include <string.h>

void encrypt(char* str){
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i]+1; 
    }
}
void decrypt(char* str){
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i]-1; 
    }
}

int main() {
    
    char password[30];
    printf("Enter Password: ");
    fgets(password,sizeof(password),stdin);

    // The strcspn() function in C stands for "String Complement Span". It calculates the length of the initial segment of a string that consists entirely of characters not present in a specified set of rejected characters.Essentially, it answers the question: "How many characters can I read from the start of String A before hitting any character that exists in String B?"
    password[strcspn(password,"\n")] = '\0';

    encrypt(password);
    printf("%s\n",password);
    decrypt(password);
    printf("%s\n",password);

    return 0;
}