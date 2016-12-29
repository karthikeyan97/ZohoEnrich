#include <stdio.h>

int main() {
    int i=0,j,k,num,a[10],temp;
    printf("Enter the number...\n");
    scanf("%d",&num);
    while(num!=0)
    {
        a[i++]=num%10;
        num=num/10;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        num=(num*10)+a[j];
    }
    printf("%d",num);

	return 0;
}

