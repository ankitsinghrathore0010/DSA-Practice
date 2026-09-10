#include <stdio.h>

int mystrlen(const char *src)
{
    int count = 0;
    while (*src != '\0')
    {
        count++;
        src++;
    }
    return count;
}
int main()
{
    char str[20] = "Pankaj";
    printf("Length = %d", mystrlen(str));
    return 0;
}
