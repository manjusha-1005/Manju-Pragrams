#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* head;
void insertatpos(int data,int pos)
{
	int i;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	if(pos==1)
	{
		temp->link=head;
		head=temp;
		return;
	}
	struct node* next=head;
	for(i=0;i<pos-1;i++)
	{
	    next=next->link;	
	}
	temp->link=next->link;
	next->link=temp;
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
		scanf("%d",&pos);
		insertatpos(data,pos);
		print_ll();
		
	}
}
