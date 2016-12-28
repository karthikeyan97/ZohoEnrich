#include <stdio.h>

int main() {
    int num,n,rem,i,m;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter m:\n");
    scanf("%d",&m);
    if(m>5 || m<1 || num<10000 || num>99999)
    {
        printf("Wrong Input!!!\n");
    }
    else
    {
        for(i=1;i<=m;i++)
            {
                rem=num%10;
                n=num/10;
                if(rem!=0)
                {
                    num=(10000*rem)+n;
                }
                else
                {
                    num=n;
                }
            }
        printf("\n%d",num);
    }
       
	return 0;
}

