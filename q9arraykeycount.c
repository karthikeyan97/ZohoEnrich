#include <stdio.h>

int main() 
{
    int a[20],i,n,key,count=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key elements:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count++;
            if(a[i]!=a[i+1])
            {
                break;
            }
        }
    }
    printf("%d\n",count);
    
	return 0;
}
