#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j,mid,n,flag=0;
    char a[10];
    printf("Enter the number:\n");
    scanf("%s",a);
    n=strlen(a);
    mid=(n/2)-1;
    while(i<=mid)
    {
        if(n%2 == 0)
        {
            j=i+1;
        }
        else
        {
            j=i+2;
        }
        if(a[mid-i] != a[mid+j])
        {
            if(flag == 0)
            {
                if(a[mid-i]>a[mid+j])
                {
                    flag=1;
                    a[mid+j]=a[mid-i];
                }
                else
                {
                    a[mid-i]=a[mid-i]+1;
                    flag=1;
                    a[mid+j]=a[mid-i];
                }
                
            }
            else
            {
               
                a[mid+j]=a[mid-i];
            }
            
            i++;
        }
    }
    printf("\nThe nearest palindrome is: %s\n",a);
    return 0;
}
