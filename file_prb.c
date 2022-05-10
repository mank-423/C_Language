#include<stdio.h>
int main()
{
    FILE *fptr;
    FILE *fptr1;
    int n1;
    int n2;
    int n3;
    char c;
    fptr = fopen("xyz.txt","r");
    fptr1 = fopen("gtl.txt","w");
    if (fptr == NULL){
        printf("File doesn't exists");
    }

    else{

        


        /*
        //Second question
        c = fgetc(fptr);
        while (c!=EOF){
            printf("%c",c);
             fputc(c,fptr1);
            c = fgetc(fptr);
        }
        fclose(fptr);
        fclose(fptr1);

        */



    /*
    //First question
    fscanf(fptr,"%d \n",&n1);
    fscanf(fptr,"%d \n",&n2);
    fscanf(fptr,"%d \n",&n3); 
    printf("The three numbers from the file is %d, %d, %d",n1,n2,n3);
    fclose(fptr);
    */
    }
    return 0;
}