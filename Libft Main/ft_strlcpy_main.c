#include <stdio.h>

int main()
{
	char d[5] = "elif";
	char s[3] = "aa";
	printf("%zu\n", ft_strlcpy(d, s, sizeof(d)));
	printf("%s", d);
}