//  Write your own version of strcpy function from <string.h> .

#include<stdio.h>
#include<string.h>

int len(char arr[])
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void copy(char new[], char str[]);
void copy(char new[], char str[]){
    for (int i = 0; i < len(str) ; i++)
    {
        new[i] = str[i];
    }
    new[len(str)] = '\0';
    // return new;
};

int main(){

    char str[] = "Nishant";
    char str2[20];
    strcpy(str2,"woww that's good");
    // copy(str2,str);
    printf("%s\n",str2);
    // copy(str2,"HELLO HELLO hello");
    // printf("%s\n",str2);
    
    return 0;
}
