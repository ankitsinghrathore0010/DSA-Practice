#include <stdio.h>
void mystrupr(char *str)
{
    while (*str!= '\0')
    {
        if (*str>= 'a' && *str<= 'z')
        {
            *str = *str- 'a' +'A';
        }
        str++;
    }
}

int main()
{
    char str[30] = "Pankaj Sharma";
    mystrupr(str);

    printf("%s", str);

    return 0;
}
