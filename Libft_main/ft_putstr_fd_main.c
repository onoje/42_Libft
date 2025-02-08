int	main(void)
{
	ft_putstr_fd("elif", 1);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("elif.txt", O_RDWR | O_CREAT ,0777);
	int fd1 = open("elif1.txt", O_RDWR | O_CREAT ,0777);
	ft_putstr_fd("eftelya", 3);
	printf("%d", fd);
	printf("%d", fd1);
}