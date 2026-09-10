#include <stdio.h>
int mystrcmp(const char *str1, const char *str2)
{
    while (*str1!= '\0' && *str2!='\0')
    {
        if (*str1 !=*str2)
        {
            return *str1-*str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    char str1[20]= "Pankaj";
    char str2[20] ="Pankaj";

    int result = mystrcmp(str1, str2);

    if (result ==0)
        printf("Strings are equal");
    else if (result <0)
        printf("String 1 is smaller");
    else
        printf("String 1 is greeter");
    return 0;
}
