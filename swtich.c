#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

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

struct node *add_m(struct node *head, int data)
{
	struct node *ptr= (struct node*)malloc(sizeof(struct node));
	struct node *
}

int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=4;
	head->link=NULL;
	
	struct node *first=(struct node*)malloc(sizeof(struct node));
	first->data=55;
	first->link=NULL;
	
	head->link=first;
	
	struct node *second=(struct node*)malloc(sizeof(struct node));
	second->data=78;
	second->link=NULL;
	
	first->link=second;
	
	add_end(head,89);
	
	/*struct node *ptr=NULL;
	ptr=head;
	int count=0;
	while (ptr!=NULL)
	{
		count++;
		printf("%d \n",ptr->data);
		ptr=ptr->link;
	}
	printf("COUNT IS: %d",count);
	return 0;
	*/
}
