#include <stdio.h>

int main(void) {
     int num,n,reverse,rem,flag=0;
     printf("Enter the numbers");
     scanf("%d",&num);
     if(num==0)
     {
         reverse=0;
     }
     else
     {
         if(num<0)
         {
             flag=1;
             num=num*-1;
         }
         n=num;
         while(n!=0)
         {
             rem=num%10;
             n=num/10;
             reverse=reverse+(rem*10);
         }
         if(flag==1)
         {
             reverse=reverse*-1;
         }
         printf("%d",reverse);
         
        }


	return 0;
}

