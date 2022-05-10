#include<stdio.h>
//To read all the files at once

int main()
{
    FILE *ptr;
    ptr = fopen("xyz.txt","r");
    if (ptr == NULL){
        printf("File not found");
    }

    else{
        char c;
        c = fgetc(ptr);
        while (c!=EOF){
            printf("%c",c);
            c = fgetc(ptr);
        }
        fclose(ptr);
    }
    return 0;
}