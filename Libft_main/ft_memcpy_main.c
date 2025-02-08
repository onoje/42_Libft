#include <stdio.h>

int	main(void)
{
	char	d[20];
	char	s[] = "Elif Duran";

	ft_memcpy(d, s, 3);
	printf("%s", d);
}

#include <stdio.h>
int main()
{
	int d[] = {1, 1, 1, 1};
	int s[] = {2, 2};
	ft_memcpy(d, s, 1);
	printf("%i\n", d[0]);
	printf("%i", d[2]);
}
