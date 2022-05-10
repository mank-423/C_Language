#include<stdio.h>

int reverse(int *ptr,int n){
    int temp;
    for(int i = 0; i<n/2;i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}


int count_pos(int *ptr,int n){
    int pos_ele[n];
    int cp = 0,i=0;
    for (i=0;i<n;i++){
        if (ptr[i]>0){
            pos_ele[cp] = ptr[i];
            cp++;
        }

        else{
            continue;
        }
    }

    printf("The number of positive integers are: %d \n",cp);
    for (i = 0; i < cp;i++){
        printf("The positive elements are: %d \n",pos_ele[i]);
    }
}
int main(){

    int arr[2][3][4];
    for (int i =0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                printf("The address of arr[%d][%d][%d]: %u \n",i,j,k,&arr[i][j][k]);
            }
        }
    }

    
    /*
    //First problem
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr;
    //ptr = &arr[0];
    ptr = arr;
    ptr = ptr + 2;
    printf("The +2 value is: %d",*ptr);

    */

   /*
    //Second problem

    int n,i;
    int table[10];
    printf("Enter the value of table:\n");
    scanf("%d",&n);

    for (i=0;i<10;i++){
        table[i] = n*(i+1);
    }

    printf("The table is:\n");
    for (i=0;i<10;i++){
        printf("%d X %d = %d \n",n,i+1,table[i]);
    }
   */

  /*
     //Third problem
    int i;
    int arr[3] = {1,2,3};
    reverse(arr,3);
    for (i=0;i<3;i++){
        printf("The value of arr[%d]: %d \n",i,arr[i]);
    }    
  */

    /*
    //Fourth problem
    int arr[10] = {-2,3,4,-5,-6,7,8,1,-10,2};
    count_pos(arr,10);
    */

   /*
   
    //Fourth problem
    int n = 3;
    int m = 10;
    int table[n][m];
    int j,i;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (i==0){
                table[i][j] = 2*(j+1);
            } 

            else if (i==1){
                table[i][j] = 7*(j+1);
            }

            else{
                table[i][j] = 9*(j+1);
            }
        }
    }

    
    for (i=0;i<n;i++){
        if (i==0){
            printf("Table of 2: \n");
            for (j=0;j<m;j++){
            printf("%d\t", table[i][j]);
        }
        }

        else if (i==1){
            printf("\nTable of 7: \n");
            for (j=0;j<m;j++){
            printf("%d\t", table[i][j]);
        }
        }

        else{
            printf("\nTable of 9: \n");
            for (j=0;j<m;j++){
            printf("%d\t", table[i][j]);
        }
        }
    }
   */
    return 0;
}