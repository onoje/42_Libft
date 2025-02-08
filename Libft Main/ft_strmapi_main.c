#include <stdio.h>

char	exf(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	printf("%s", ft_strmapi("elif", exf));
}