int	main(void)
{
	ft_putendl_fd("elif", 1);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("elif.txt", O_RDWR | O_CREAT ,0777);
	ft_putendl_fd("eftelya", 3);
	printf("%d", fd);
}