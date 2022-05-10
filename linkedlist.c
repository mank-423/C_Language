#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *del_beg(struct node *head)
{
	if (head==NULL)
	{
		printf("EMPTY :(");
	}
	
	else
	{
		struct node *temp=head;
		head=head->link;
		free(head);
		head=NULL;
	}
	return head;
}

struct node *del_end(struct node *head)
{
	if (head==NULL)
	{
		printf("The list empty");
	}
	else if(head->link=NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct node *temp=head;
		//struct node *temp2=head;
		while (temp->link!=NULL)
		{
			//temp2=temp;
			temp=temp->link;
		}
		//temp2->link=NULL;
		free(temp->link);
		temp->link=NULL;
	}
	return head;
}
int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data=5;
	head->link=NULL;
	
	struct node *first=NULL;
	first = (struct node*)malloc(sizeof(struct node));
	first->data=42;
	first->link=NULL;
	head->link=first;
	
	struct node *second=NULL;
	second = (struct node*)malloc(sizeof(struct node));
	second->data=4;
	second->link=NULL;
	first->link=second;
	
	struct node *ptr=NULL;
	//head=del_beg(head);
	//ptr=head;
	//printf("%d \n",ptr->data);
	
	//head=del_end(head);
	//ptr=head;
	
	ptr=head;
	while(ptr->link!=NULL)
	{
		printf("%d \n", ptr->data);
		ptr=ptr->link;
	}

	return 0;
}
