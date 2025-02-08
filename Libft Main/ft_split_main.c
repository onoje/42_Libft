#include <stdio.h>

int main()
{
	char *s = "elf elif file lef"; 
    char **result = ft_split(s, ' ');

    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }
}