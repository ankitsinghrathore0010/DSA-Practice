#include <stdio.h>
void mystrcpy(char *dest, const char *src)
{
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
    char str1[20] = "Pankaj";
    char str2[20] = "Sharma Sir";
    puts(str1);
    puts(str2);
    mystrcpy(str2, str1);
    puts(str2);
    return 0;
}
