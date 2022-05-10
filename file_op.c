#include<stdio.h>
int main()
{
    FILE *fptr;
    int num = 45;
    //fptr = fopen("xyz.txt","r");
    fptr = fopen("xyz.txt","w");


    if (fptr == NULL){
        printf("File doesn't exists");
    }
    //fgetc = demo for reading a file
    else{
    //char str = fgetc(fptr);
    //fprintf(fptr,"The number is %d", num); -> X
    // printf("The character is %c \n",fgetc(fptr));
    // printf("The character is %c \n",fgetc(fptr));
    // printf("The character is %c \n",fgetc(fptr));
    fputc('c',fptr);
    fclose(fptr);



    }

    return 0;
}