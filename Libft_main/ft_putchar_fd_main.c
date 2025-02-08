int	main(void)
{
	ft_putchar_fd('e', 1);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("elif.txt", O_RDWR | O_CREAT ,0777);
	int fd1 = open("elif1.txt", O_RDWR | O_CREAT ,0777);
	ft_putchar_fd('a', 3);
	printf("%d\n", fd);
	printf("%d", fd1);
}
