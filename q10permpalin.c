#include <stdio.h>
#include<string.h>

int main(void) 
{
    int n,i,j,count,odd=0,flag=0;
    char str[20],ch;
    printf("Enter the string\n");
    scanf("%s",str);
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
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nTRUE");
    }
    else
    {
        printf("\nFALSE");
    }
    
	return 0;
}

