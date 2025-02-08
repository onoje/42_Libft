#include <stdio.h>
int main()
{
	char a[7] = "elif";
	ft_bzero(a, 2);
	printf ("%i\n", a[0]);
	printf ("%i", a[3]);
}
