#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num1;
    ptr = fopen("xyz.txt","r");
    
    //ptr = fopen("xyz.txt","a"); 
    //r ,rb - read and read in binary ,NULL if not exits
    //w,wb  = write and write in binary - overwrite
    //a = appending a fie
    
    //File check
    if  (ptr == NULL){
        printf("File doesnt exists");
    }

    else{
        fscanf(ptr,"%d", &num);
        fscanf(ptr,"%d", &num1);
        fclose(ptr);
        printf("The value of num is %d,%d \n",num,num1);
    }
    

   
 


    return 0;
}



