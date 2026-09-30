#include <stdio.h>

int main()
{

    // char name[] = "Nishant";

    // for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    // {
    //     printf("%c",name[i]);
    // }
    // printf("\n%s\n",name);

    // user input using format specifier %s
    // char branch[4];
    // scanf("%s",branch);

    // printf("%s",branch);

    // gets:  for multiword string with spaces not multiple line
    //  char intro[40];
    //  gets(intro);

    // //puts : print string with a new line
    // puts(intro);
    // puts(intro);

    // char *name = "Nishant";
    // printf("%s\n",name);
    // name = "sanjana";
    // printf("%s",name);

    char name[] = "nishant";
    char *ptr = name;
    printf("%s\n", name);
    printf("%s\n", ptr);
    
    // ptr = "Sanjana";
    // printf("%s\n", name);
    // printf("%s\n", ptr); // pointer will point on another string liternal it doesnt change name
    
    // ptr[1] = 'N'; //array itself is modifiable
    // printf("%s\n", name);
    // printf("%s\n", ptr); 
    

    return 0;
}