#include <stdio.h>

void del(void *content)
{
    free(content);
}

int main()
{
    char *a = (char *)malloc((sizeof(char) * 10) + 1);
    char *b = (char *)malloc((sizeof(char) * 10) + 1);
    char *c = (char *)malloc((sizeof(char) * 10) + 1);
    t_list *nodea = ft_lstnew(a);
    t_list *nodeb = ft_lstnew(b);
    t_list *nodec = ft_lstnew(c);
    ft_lstadd_front(&nodec, nodeb);
    ft_lstadd_front(&nodeb, nodea);
    nodec = ft_lstlast(nodea);
    ft_lstclear(&nodea, del);
}