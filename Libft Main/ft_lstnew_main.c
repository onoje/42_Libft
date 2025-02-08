#include <stdio.h>

int main(void)
{
    int value = 42;
    t_list *node = ft_lstnew(&value);
    printf("%d", *(int *)(node->content));
}