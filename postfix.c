//#include<stdio.h>
//#include<ctype.h>
//
//char postfix[20];
//float stack[20];
//int top=-1;
//
//void push(char ch)
//{
//	top++;
//	stack[top]=ch;
//}
//
//float pop()
//{
//	char x;
//	x=stack[top];
//	top--;
//	return x;
//}
//
//int main()
//{
//	int i=0,j=0;
//	float op1,op2;
//	printf("Enter the postfix:");
//	scanf("%s ",postfix);
//	
//	for (i=0;postfix[i]!='\0';i++)
//	{
//		if (isdigit(postfix[i]))
//		{
//			push(postfix[i]-48);
//		}
//		
//		else
//		{
//			op2=pop();
//			op1=pop();
//			switch(postfix[i])
//			{
//				case '+':
//					push(op1+op2);
//					break;
//				case '-':
//					push(op1-op2);
//					break;
//				case '*':
//					push(op1*op2);
//					break;
//				case '/':
//					if (op2==0)
//					{
//						printf("DIVISION BY ZERO");
//					}
//					
//					else
//					{
//						push((float)(op1/op2));
//					}
//					break;
//					
//				default:
//					printf("INVALID");
//			}
//			
//		}
//	}
//	
//	printf("RESULT: %f \n",stack[top]);
//	return 0;
//}

#include<stdio.h>
#include<conio.h>

char stack[20];
int top=-1;

void push(char ch)
{
	stack[top++]=ch;
}

int pop()
{
	if (top==-1)
		return -1;
	char x;
	x= stack[top];
	top--;
	return x;
}

int prio(char symbol)
{
	if (symbol=='(')
	{
		return 0;
	}
	
	else if(symbol=='+' || symbol == '-')
	{
		return 1;
	}
	
	else if(symbol=='*'||symbol=='/')
	{
		return 2;
	}

	
}

	
int main()
{
	char exp[20];
	char *e,x;
	printf("Enter infix:");
	scanf("%s",exp);
	e=exp;
	
	while(*e != "\0")
	{
		if (isalnum(*e))
		{
			printf("%c",*e);
		}
		
		else if (*e=="(")
		{
			push(*e);
		}
		else if (*e==")")
		{
			while ((stack[top])!="(")
			{
				x=pop();
				printf("%c",x);
			}
		}
		
		else
		{
			//Operator
			while (prio(stack[top]>=prio(*e)))
			{
				printf("%c",pop());
			}
			push(*e);
		}
		
		
	}
	while (top!=-1)
	{
		printf("%c",pop());
	}
	
	return 0;
}


