#include <stdio.h>
#include <unistd.h>
int main() {
    int i;
    char str[]="HAPPY PONGAL";
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
        fflush(stdout);
        usleep(1000000);
    }
    return 0;
}
