#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node;
struct node
{
	int a;
	node* ptrn;
};
node* createl()
{
	node* l;
	l=(node*)malloc(sizeof(node));
	l->ptrn=NULL;
	return l;
}
void insert(node*l,int b)
{
	int flag=0;
	while(l->ptrn!=NULL)
	{
		if(l->ptrn->a==b)
		{
		flag=1;
		}
		l=l->ptrn;
	}
	if(!flag)
	{
		l->ptrn=(node*)malloc(sizeof(node));
		l->ptrn->a=b;
		l->ptrn->ptrn=NULL;
	}
	else
	{
		printf("element already present in the list");
	}
}
void output(node*l)
{
	while(l->ptrn!=NULL)
	{
		printf("%d\n",l->ptrn->a);
		l=l->ptrn;
	}
}
int find(node* l,int b)
{
	int ind=1;
	node *g=l;
	while(l->ptrn!=NULL&&l->ptrn->a!=b)
	{
		l=l->ptrn;
		ind++;
	}
	if(l->ptrn)
	if(!l->ptrn->ptrn)
	{
		printf("the next node of the element %d is a null node",l->ptrn->a);
		return ind;
	}
	else
	{
		printf("the next node element is %d it is in location %d",l->ptrn->ptrn->a,ind+1);
	}
	else
	{
		return 0;
	}
}
main()
{
	node *g=createl();
	int fla=0,in1,in2=0,ind,key;
	do
	{
		printf("enter the element to be inserted ");
		scanf("%d",&in1);
		insert(g,in1);
		printf("\ndo you wish to insert another element 1-yes or 0-no\n");
		scanf("%d",&in2);
	}while(in2!=0);
	printf("enter the element to be found\n");
	scanf("%d",&key);
	ind=find(g,key);
	if(!ind)
	{
		printf("The element is not found");
	}
	getch();
}
