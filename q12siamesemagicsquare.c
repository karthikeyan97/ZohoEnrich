/*Write a program to construct a magic square of order "N" using Siamese Method */

#include <stdio.h>

void check(int *p1, int *p2,int n)
{
    if(*p1==-1)
    {
        *p1=n-1;
    }
    if(*p1==n)
    {
        *p1=0;
    }
    if(*p1==n+1)
    {
        *p1=1;
    }
    if(*p2==-1)
    {
        *p2=n-1;
    }
    if(*p2==n)
    {
        *p2=0;
    }
}

int main() 
{
    int i,j,x,num;
    int a[10][10];
    printf("Enter the size(odd number) of the magic square:\n");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
	{
	    for(j=0;j<num;j++)
	    {
	        a[i][j]=0;
	    }
	}
	
    i=0;
    j=(num/2);
	a[i][j]=1;
	
	for(x=2;x<=(num*num);x++)
	{
	    i=i-1;
	    j=j+1;
	    
	    check(&i,&j,num);
	    
	    if(a[i][j]!=0)
	    {
	        i=i+2;
	        j=j-1;
	       
	    }
	    
	    check(&i,&j,num);
	    
	    a[i][j]=x;
	}
	
	printf("The magic square is:\n");
	
	for(i=0;i<num;i++)
	{
	    for(j=0;j<num;j++)
	    {
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	
	return 0;
}

