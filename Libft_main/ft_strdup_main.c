#include <stdio.h>

int	main(void)
{
	const char arr[] = "Elif Duran";
	printf("%p\n", arr);
	printf("%p", ft_strdup(arr));
}

#include <stdio.h>
int main()
{
	char s[] = "elf";
	printf("%s", ft_strdup(s));
}