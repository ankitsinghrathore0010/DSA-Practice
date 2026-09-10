#include <stdio.h>
#include <string.h>
void mystrrev(char *src)
{
    int s, e, l;
    l=strlen(src);
    s=0;
    e=l - 1;
    while (s<e)
    {
        char temp= src[s];
        src[s]=src[e];
        src[e]=temp;
        s++;
        e--;
    }
}

int main()
{
    char str[20] = "Pankaj";
    printf("Original: ");
    puts(str);
    mystrrev(str);
    printf("Reverse: ");
    puts(str);
    return 0;
}
