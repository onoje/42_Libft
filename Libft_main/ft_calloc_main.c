#include <stdio.h>

int	main(void)
{
	int	*arr = (int *)ft_calloc(4, sizeof(int));
	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
}
