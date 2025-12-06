#include<stdio.h>
#include <string.h>
int main()
{
    char line[200];
    int chars = 0, words = 0,lines = 0;
    printf("enter text (press ENTER on an empty line to stop):\n");
    while (gets(line) != NULL && strlen(line) !=0)
    {
        lines++;
        int i=0;
        while (line[i]! '\0')
        {
            chars++;
            if((i==0 && line[i]!=' ' && line[i]!='\t')
        (line[i]!=' ' && line[i]!='\t' &&
        (line[i-1]==' ' ||line[i-1]=='\t')))
        {
            words++;
        }
        i++;
        }
    }
    printf("\ncharacters:%d\n", chars);
    printf("words:%d\n", words);
    printf("lines:%d\n", lines);
    return 0;
}