#include <stdio.h>
void mystrlwr(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str - 'A' + 'a';
        }
        str++;
    }
}

int main()
{
    char str[30] = "Pankaj Sharma";
    mystrlwr(str);
    printf("%s", str);
    return 0;
}
