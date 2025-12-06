#include <stdio.h>
#include<string.h>
int main()
{
    char str [100], ch;
    char *ptr;
    printf("enter a string:");
    gets(str);
    printf("enter a character to search:");
    scanf("%c", &ch);
    ptr=strchr(str,ch);
    if (ptr==NULL)
    printf("-1");
    else 
    printf("character '%c' found at position:%d", ch,ptr-str);
    return 0;
}