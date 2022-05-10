#include<stdio.h>
#include<string.h>

//typedef removes using "struct employee", instead emp could be used
typedef struct employee
{
    int code;
    char name[20];
    float salary;
} emp;

void show(emp e)
{
    printf("The code of employee is:");
    printf("%d \n",e.code);

    printf("The salary of employee is:");
    printf("%f \n",e.salary);
    
    printf("The name of employee is:");
    puts(e.name);
}

int main()
{
    emp e1;//typedef to change struct employee e1 
    emp *ptr;

    ptr = &e1;
    
    //(*ptr).code = 101;
    ptr->code = 101;//Arrow operator for the same purpose
    strcpy(ptr->name,"Mayank");
    ptr->salary = 200.34;
    show(*ptr);
    return 0;
}