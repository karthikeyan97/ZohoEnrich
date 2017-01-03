/*Given a sorted array, write a function to find the number of occurrences of a number in that array 

Input array: [ 1, 1, 2, 3, 3, 3, 4, 5 ] 
Input value: 3 
Output: 3 (the number 3 occurs 3 times)*/

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
    printf("No of occurence of %d is %d\n",key,count);
    
	return 0;
}
