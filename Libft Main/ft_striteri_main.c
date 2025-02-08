#include <stdio.h>

void exf(unsigned int i, char* c)
{
	*c = *c + i;
}

int main()
{
	char a[] = "elif";
	ft_striteri(a, exf);
	printf("%s", a);
}
