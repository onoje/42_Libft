#include <stdio.h>

int main()
{
	char d[10] = "elif";
	char s[3] = "aa";
	printf("%zu\n", ft_strlcat(d, s, sizeof(d)));
	printf("%s", d);
}