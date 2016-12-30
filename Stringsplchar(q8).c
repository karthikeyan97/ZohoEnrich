#include <stdio.h>
#include<string.h>

int main(void) {
    int n,i,j=0;
    char str[50],str1[50],ch;
    printf("Enter the string\n");
    gets(str);
    printf("The given string: %s\n",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        ch=str[i];
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]==' '||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U');
        else
        {
            if(((str[i]>64)&&(str[i]<91))||((str[i]>96 )&&(str[i]<123))) 
            {
                str1[j++]=str[i];
            }
        }
    }
    str1[j]='\0';
    printf("Derived string: %s",str1);

	return 0;
}

