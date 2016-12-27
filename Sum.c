#include <stdio.h>

int main(void) {
    int num, n, digit, sum=0, count=0;
    printf("Enter the numbers");
    scanf("%d",&num);
    if(num==0)
    {
        count=1;
    }
    else
    {
        if(num<0)
        {
            num*=(-1);
        }
        n=num;
        while(n!=0)
        {
            digit=num%10;
            n=num/10;
            sum=sum+digit;
            count++;
        }
    }
    printf("Number of digits: %d\nSum of digits: %d\n",count,sum);
	return 0;
}

