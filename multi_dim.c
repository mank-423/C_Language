#include<stdio.h>

int marks[2][5];

int display(int n,int m){
    printf("Subject1 \t Subject2 \t Subject3 \t Subject4 \t Subject5 \n");
    for (int i=0;i<n;i++){
        printf("\n For student%d: \n",i+1);
        for (int j=0; j<m;j++){
            printf("%d \t\t",marks[i][j]);        
        }
    }
}

int main(){
    int n_students = 2;
    int n_subects = 5;

    for (int i=0;i<n_students;i++){
        for (int j=0; j<n_subects;j++){
            printf("Enter the marks of student %d in subject %d: \n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    display(n_students,n_subects);
    return 0;
}