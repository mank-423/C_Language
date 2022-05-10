#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
}vector;


typedef struct bank
{
    int accnt_no;
    char name[20];
    char brnch_name[20];
    int balance;
}bk;


void sumvector(vector v1, vector v2){
    int sumx = v1.x + v2.x;
    int sumy = v1.y + v2.y;
    printf("Sum of the vector:\n");
    printf("Sum of x dimension: %d \n",sumx);
    printf("Sum of y dimension: %d \n",sumy);
};

void display(vector z[]){
    int i = 0;
    for (i=0;i<5;i++){
        printf("The complex number %d is: %d + i%d \n",i+1,z[i].x, z[i].y);
    }
}

int main()
{
    bk b1;
    b1.accnt_no = 12341;
    b1.balance = 200000;
    b1.brnch_name = "Juhu";
    b1.name = "Mayank";






    /*
    //Third problem and 4th
    int i=0;
    vector v[5];
    printf("Z = X + iY \n");
    for (i=0;i<5;i++){
        printf("%d number \n",i+1);
        printf("Enter the real part of Z: \n");
        scanf("%d", &v[i].x);
        printf("Enter the imaginary part of Z: \n");
        scanf("%d", &v[i].y);
    }
    display(v);
    */


    /*
    //Second problem
    vector v1,v2;
    vector *ptr,*ptr1;
    ptr = &v1;
    ptr->x = 24;
    ptr->y = 45;
    ptr1->x = 88;
    ptr1->y = 2;
    sumvector(*ptr,*ptr1);
   */
   
    /*
    //First problem
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    printf("X: %d and Y: %d \n",v1.x,v1.y);
    
    v2.x = 2;
    v2.y = 5;
    printf("X: %d and Y: %d \n",v2.x,v2.y);
    */


    return 0;
}