/*Learn the steps behind "Finding the determinant of a matrix using Gauss Jordan Elimination method". 
*/

#include <stdio.h>

int main(void)
{
    int i,j,k,m,det=1;
    double x,a[5][5]={0};
    printf("Enter the order:\n");
    scanf("%d",&m);
    printf("Enter the elements:\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(k=0;k<i;k++)
        {
            x=a[i][k]/a[k][k];
            for(j=0;j<m;j++)
            {
                a[i][j]=a[i][j]-(x*a[k][j]);
            }
        }
    }
    
    for(i=0;i<m;i++)
    {
        det=det*a[i][i];
    }
    
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }*/
    
    printf("\nThe determinant is %d\n",det);
    
	return 0;
}

