#include<stdio.h>
#include<string.h>

struct student
    {
        int roll_no;
        char name[20];
        int fees;
    };


int main()
{
    int i;
    struct student s[3];
    
    printf("Enter details of student %d : \n",i+1);
    printf("Enter the roll no.: \n");
    scanf("%d",&s[0].roll_no);
    printf("Enter the name: \n");
    scanf("%s",s[0].name);
    printf("Enter the fees: \n");
    scanf("%d",&s[0].fees);
    i++;

    printf("Enter details of student %d : \n",i+1);
    printf("Enter the roll no.: \n");
    scanf("%d",&s[1].roll_no);
    printf("Enter the name: \n");
    scanf("%s",s[1].name);
    printf("Enter the fees: \n");
    scanf("%d",&s[1].fees);

    i++;

    printf("Enter details of student %d : \n",i+1);
    printf("Enter the roll no.: \n ");
    scanf("%d",&s[2].roll_no);
    printf("Enter the name: \n ");
    scanf("%s",s[2].name);
    printf("Enter the fees: \n ");
    scanf("%d",&s[2].fees);

    return 0;
}