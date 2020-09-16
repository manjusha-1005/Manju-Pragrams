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
void delatpos(int pos)
{
	int i;
	struct node* ptr=head;
	struct node* preptr=NULL;
	for(i=1;i<pos;i++)
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
	int i,n,data,pos;
	printf("enter nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insertend(data);
		print_ll();
		
	}
	scanf("%d",&pos);
	delatpos(pos);
	print_ll();
}
