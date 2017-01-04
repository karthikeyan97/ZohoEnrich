#include <stdio.h>
#include<stdlib.h>

void printArray(int** ar,int row,int col)
{
	int m,n;
	for(m=0;m<row;m++)
	{
		for(n=0;n<col;n++)
		{
			printf("%d\t",ar[m][n]);
		}
		printf("\n");
	}
}

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

int main(void) 
{
    int num,i,j,x;
    int **a;
    printf("Enter the size(odd number) of the square:\n");
    scanf("%d",&num);
    a = malloc(num * sizeof *a);
	for (i=0; i<num; i++)
	{
		a[i] = malloc(num * sizeof *a[i]);
	}
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
	printArray(a,num,num);
	return 0;
}

