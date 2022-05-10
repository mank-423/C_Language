#include<stdio.h>
#include<conio.h>

void prime(int num){
        int i,m=0,fg=0;    
        m=num/2;    
        for(i=2;i<=m;i++)    
        {    
        if(num%i==0)    
        {    
        printf("Not prime");    
        fg=1;    
        break;    
        }    
        }    
        if(fg==0)    
        printf("Prime");   
}

void fact(int num){
        int fa=1;
        for (int i=1;i<=num;i++){
            fa = fa * i;
        }
        printf("Factorial: %d",fa);
}


int check(int *num){
    int flg;
    if (2 <= num <=40){
        flg = 1;
    }

    else{
        flg =0;
    }
    return flg;

}

void main(){
    int choice,n;
    printf("Enter the choice:");
    scanf("%d",&choice);
    printf("Enter the value of n:");
    scanf("%d",&n);
    if (choice==1){
        int h;
        h = check(&n);
         if (h==1){
            fact(n);
        }

        else{
            printf("Number only between 2 and 40");
        }

    }
    else if (choice==2){
        int h;
        h = check(&n);

        if (h==1){
            prime(n);
        }

        else{
            printf("Number only between 2 and 40");
        }

    }

    else{
        printf("Wrong choice");
    }

}