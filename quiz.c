#include<stdio.h>
#include<conio.h>
//Pointer arithematic
int main(){
    int marks[4];
    int *ptr;
    ptr = marks;

    for (int i=0;i<4;i++){
        printf("Enter the value of %dth student: \n",i+1);
        scanf("%d",ptr);
        ptr++;
    }

    for (int i=0;i<4;i++){
        printf("The value of marks for student %d is %d \n", i+1,marks[i]);
    }

    
    
}
