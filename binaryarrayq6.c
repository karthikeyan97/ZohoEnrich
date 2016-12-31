#include <stdio.h>

int main() {
    int a[10][10],i,j,k,m,n;
    printf("Enter m,n and k\n");
    scanf("%d %d %d",&m,&n,&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
         
        }
    }
	for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
	return 0;
}


