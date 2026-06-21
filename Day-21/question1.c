#include <stdio.h>
int main()
{
    char str[100];
    int length =0;
    printf("enter a string");
    scanf("%s",str);
    while(str[length]!='\0')
    {
    length++;
    }
    printf("length of string=%d",length);
    return 0;
}


