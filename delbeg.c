#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* head;
void insertbeg(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=head;
	head=temp;
}
void delbeg()
{
	struct node* man=head;
	head=man->link;
	free(man);
}
void print_ll()
{
	struct node* manju=head;
	while(manju!=NULL)
	{
		printf("%d",manju->data);
		manju=manju->link;
	}
}
int main()
{
	head=NULL;
	int i,n,data;
	printf("enter nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insertbeg(data);
		print_ll();	
	}
	delbeg();
	print_ll();
}
