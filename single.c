#include<stdio.h>
#include<stdio.h>
struct node {
	int data;
	struct node *link;
};

void display(struct node *head)
{
	int count=0;	
	struct node *ptr=NULL;
	ptr=head;
	while (ptr!=NULL)
	{
		count++;
		printf("%d \n",ptr->data);
		ptr=ptr->link;	
	}
	printf("The count is: %d \n", count);
}


void addend(struct node *head, int d)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=NULL;
	ptr=head;
	temp->data=d;
	temp->link=NULL;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
	
}

struct node *addbeg(struct node *head, int d)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=d;
	ptr->link=NULL;
	
	ptr->link=head;
	head=ptr;
	
	return head;
}



void addpos(struct node *head, int d)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=d;
	temp->link=NULL;
	
	struct node *ptr=NULL;
	struct node *ptr2=NULL;
	ptr=head;
	ptr2=temp;
	
	int pos,i=0;
	printf("Enter the position:");
	scanf("%d",&pos);
	while (ptr->link!=NULL)
	{
		i++;
		if (i==pos)
		{
			temp->link = ptr->link;
			ptr->link=temp;
		}
		else
		{
			ptr=ptr->link;
		}
	}
	ptr=head;
	while (ptr!=NULL)
	{
		printf("%d \n",ptr->data);
		ptr=ptr->link;	
	}	

}


void addatpos(struct node *head,int d, int pos)
{
	struct node *ptr=head;
	struct node *ptr2=malloc(sizeof(struct node));
	ptr2->data=d;
	ptr->link=NULL;
	
	pos--;
	while (pos!=1)
	{
		ptr=ptr->link;
		pos--;
	}
	
	ptr2->link=ptr->link;
	ptr->link=ptr2;
}
int main()
{
	/*int num;
	printf("Enter the activity u want to perform: \n");
	printf("1.Insert at the end \n 2.Insert at the begining");
	scanf("%d",num);
	*/
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=9;
	head->link=NULL;
	
	struct node *one=(struct node *)malloc(sizeof(struct node));
	one->data=4;
	one->link=NULL;
	head->link=one;
	
	struct node *two=(struct node *)malloc(sizeof(struct node));
	two->data=7;
	two->link=NULL;
	one->link=two;
	
	//addend(head,78);
	
//	head=addbeg(head,8);
//	one=head;
//	while (one!=NULL)
//	{
//		printf("%d \n",one->data);
//		one=one->link;
//	}
	addpos(head,6);
	//display(head);
	
	
	return 0;
}
