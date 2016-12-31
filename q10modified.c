#include <stdio.h>
#include<string.h>

int n,i,j,count;
char str[20];

int perm()
{
	int count,odd=0;
	char ch;
	n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]!='\0')
        {
            count=1;
            ch=str[i];
            for(j=i+1;j<n;j++)
            {
                if(ch==str[j])
                {
                    count++;
                    str[j]='\0';
                }
            }
            if(count%2 != 0)
            {
                odd++;
            }
            if(odd==2)
            {
                printf("\nFALSE");
                return 0;
            }
        }
    }
    printf("\nTRUE");
    return 0;
}

int main(void) 
{
	int a;
    printf("Enter the string\n");
    scanf("%s",str);
	a=perm();
    
    return 0;
}

