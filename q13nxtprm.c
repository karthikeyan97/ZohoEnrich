/*Write a Program to find the next prime number of a given number. 

Ex: 
Input: 5 
Output: 7 

Input : 120 
Output: 127*/

//Using sieve of eratosthenes

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,next_prime=0;
    int *a;
    printf("Enter the number:\n");
    scanf("%d",&n);
    a = (int*)malloc(((2*n)+1)*sizeof(int)) ;
    for(i=0;i<2*n;i++)
    {
        a[i]=i;
    }
    for(i=2;i<2*n;i++)
    {
        if(a[i]>0)
        {
            if(a[i]>n)
            {
                next_prime = i;
                break;
            }
            for(j=a[i]*2;j<2*n;j=j+a[i])
            {
                a[j]=-1;
            }
        }
    }
    printf("\nThe next prime number is: %d\n",next_prime);
    
    return 0;
}
