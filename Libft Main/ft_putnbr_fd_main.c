int	main(void)
{
	ft_putnbr_fd(-1357, 1);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("elif.txt", O_RDWR | O_CREAT ,0777);
	int fd1 = open("elif1.txt", O_RDWR | O_CREAT ,0777);
	ft_putnbr_fd(134, 3);
	printf("%d", fd);
	printf("%d", fd1);
}