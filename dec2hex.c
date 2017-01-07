#include <stdio.h>
char hex(int r)
{
    if(r>9)
    {
        switch(r)
        {
            case 10:
            {
                return 'a';
                break;
            }
            case 11:
            {
                return 'b';
                break;
            }
            case 12:
            {
                return 'c';
                break;
            }
            case 13:
            {
                return 'd'; 
                break;
            }
            case 14:
            {
                return 'e';
                break;
            }
            case 15:
            {
                return 'f';
                break;
            }
        }
    }
    return r;
}

int main(void)
{
    int dec,rem,i=0;
    char str[10];
    printf("Enter the decimal value\n");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%16;
        dec=dec/16;
        str[i++]=hex(rem);
    }
    str[i]='\0';
    printf("\n%s",str);
	return 0;
}

