#include <stdio.h>

int	main(void)
{
	char	d[] = "Merhaba";
	char	s[] = "Elif Duran";

	ft_memmove(d, s, 3);
	printf("%s", d);
}

#include <stdio.h>
int main()
{
	char d[4] = "elif";
	char s[2] = "aa";
	printf ("%s", ft_memmove(d, s, sizeof(s)));
}
