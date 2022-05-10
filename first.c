#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *add_beg(struct node *head, int d)
{
	struct node *ptr=(struct node* )malloc(sizeof(struct node));
	ptr->data=d;
	ptr->link=NULL;
	
	ptr->link=head;
	head=ptr;
	return head;
}

struct node *add_end(struct node *head, int data)
{
	struct node *temp,*ptr;
	temp=(struct node* )malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	
	ptr=head;
	
	while (ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}

void countofnodes(head)
{
	int count=0;
	struct node* ptr=NULL;
	ptr=head;
	while (ptr)
	{
		if (ptr!=NULL)
		{
			count+=1;
			ptr = ptr->link;
		}
		else if (ptr=NULL)
		{
			count++;
			break;
		}
	
	}
	printf("Count is :  %d",count);
}


void add_at_pos(struct node* head, int data, int pos)
{
	struct node *ptr=head;
	struct node *ptr2=(struct node *)malloc(sizeof(struct node));
	ptr2->data=data;
	ptr2->link=NULL;
	pos--;
	while (pos!=1)
	{
		ptr=ptr->link;
		ptr--;
	} 
	ptr2->link=ptr->link;
	ptr->link=ptr2;
	
}
int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data=5;
	head->link=NULL;
	
	
	struct node *current=NULL;
	current = (struct node*)malloc(sizeof(struct node));
	current->data=42;
	current->link=NULL;
	head->link=current;
	

	struct node *current2=NULL;
	current2 = (struct node*)malloc(sizeof(struct node));
	current2->data=60;
	current2->link=NULL;
	current->link = current2;
	
	struct node *ptr = NULL;
	
	add_at_pos(head,5,3);
	
	
	ptr=head;
	while(ptr->link!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}

	/*countofnodes(head);
	current2=head;
	while (current2->link!=NULL)
	{
		printf("%d \n", current2->data);
		current2=current2->link;
	}

	*/
	return 0;
}
