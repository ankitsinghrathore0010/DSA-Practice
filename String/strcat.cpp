#include <stdio.h>
void mystrcat(char *dest, const char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char str1[30] = "Pankaj ";
    char str2[20] = "Sharma";
    mystrcat(str1, str2);
    printf("%s", str1);
    return 0;
}
