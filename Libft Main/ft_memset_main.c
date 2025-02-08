#include <stdio.h>

int	main(void)
{
	unsigned char	array[] = "Elif Duran";
	ft_memset(array, 'x', 4);
	printf("%s", array);
}

#include <stdio.h>
int main()
{
	int array[] = {123, 234,6};
	ft_memset(array, 255 , 4);
	ft_memset(array, 227 , 2);
	ft_memset(array, 224 , 1);
	printf("%d\n",array[0]);
}