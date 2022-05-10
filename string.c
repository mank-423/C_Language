#include<stdio.h>
#include<string.h>

int main(){

    /*
    //Initializarion
    char str1[] = {'M','a','y','a','n','k','\0'};
    char str[] = "Mayank";

    //Iteration
    char *ptr = str; //str1 or str both ways works the same
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }

    char *pt = "Mank42";
    printf("\n%s",pt); //to print easily
    */


    /*
    //Input of string
    char st[20];
    printf("\nEnter your name: \n");
    //scanf("%s",st);//This wouldn't allow spaces in string
    gets(st);
    //printf("%s",st);//This doesn't puts curosr on next line
    puts(st);
    */


    //using the pointer for string

    //String functions
    char st1[45] = "Hello";
    char *st2 = "Mayank";
    int val = strcmp(st1,st2);//0 = equal, -ve = if mismatch in 1st character greater ASCII value, +ve = same logic
    printf("The value of val is: %d",val);
    printf("Lenght of st1 is:%d",strlen(st1));//length excluding null character
    strcpy(st1,st2);
    printf("\nNow st1 is : %s", st1);
    printf(" \nConcatenation: %s",strcat(st1,st2));//concatenates without any space
     
    
    
    return 0;
}