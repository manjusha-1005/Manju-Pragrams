#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* head;
void insertend(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct node* next=head;
	while(next->link!=NULL)
	{
	    next=next->link;	
	}
	next->link=temp;
}
void delend()
{
	struct node* ptr=head;
	struct node* preptr=NULL;
	while(ptr->link!=NULL)
	{
		preptr=ptr;
		ptr=ptr->link;
	}
	preptr->link=ptr->link;
	free(ptr);
}
void print_ll()
{
	struct node* manju=head;
	while(manju->link!=NULL)
	{
		printf("%d",manju->data);
		manju=manju->link;
	}
	printf("%d",manju->data);
}
int main()
{
	head=NULL;
	insertend(1);
	insertend(2);
	insertend(3);
	insertend(4);
	insertend(5);
	print_ll();
	delend();
	printf("/n"); 
	print_ll();
		
	}
