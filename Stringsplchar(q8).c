#include <stdio.h>
#include<string.h>

int main(void) {
    int n,i,flag=0;
    char str[20];
    printf("Enter the string ...\n");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The string is Palindrome\n");
    }
    else
    {
        printf("The string is not Palindrome\n");
    }

	return 0;
}

