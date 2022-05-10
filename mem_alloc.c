#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n=4;
    int m =6;
    ptr = (int *)malloc(n*sizeof(int));

     for (int i=0;i<n;i++){
        printf("Enter the value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }
    
    //Realloc - change the size of memory
    //This will reuse the memory which is of no use and provides less consumption of memeory
    ptr =realloc(ptr, m*sizeof(int));
    
     for (int i=0;i<m;i++){
        printf("Enter the value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i=0;i<m;i++){
        printf("%d \n",ptr[i]);
    }
    
    





    
    
    
    /*
    //Calloc
    int *ptr,n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));

    for (int i=0;i<n;i++){
        printf("Enter the value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }
    
    //Free
    free(ptr);
    

    for (int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }

    */
    
    
    
    /*
    //Calloc
    //int *ptr;
    float *ptr1;
    ptr1 = (float *)malloc(5*sizeof(float));

    for (int i=0;i<6;i++){
        printf("Enter value of %d element is: \n",i);
        scanf("%f",&ptr1[i]);
    }

    for (int i=0;i<6;i++){
        printf("The value of %d element is: %.2f \n",i,ptr1[i]);
    }

    //ptr = (int *)malloc(6*sizeof(int));
    /*
    for (int i=0;i<6;i++){
        printf("Enter value of %d element is: \n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i=0;i<6;i++){
        printf("The value of %d element is: %d \n",i,ptr[i]);
    }
    */

    return 0;

}