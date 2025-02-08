int main(void)
{
    char a[6] = "hello";
    char b[6] = "world";
    t_list *node = ft_lstnew(&a);
    t_list *node1 = ft_lstnew(&b);
    ft_lstadd_front(&node1, node);
    printf("%s\n", (char *) node -> content);
    printf("%s\n", (char *) node -> next -> content);
}

int main(void)
{
    char a[6] = "hello";
    char b[6] = "world";
    t_list *node = ft_lstnew(&a);
    t_list *node1 = ft_lstnew(&b);
    ft_lstadd_front(&node1, node);
    t_list *last = ft_lstlast(node1);
    printf("%s", (char *) lst -> content);
}

int main(void)
{
    t_list *node1 = ft_lstnew(strdup("elif"));
    t_list *node2 = ft_lstnew(strdup("eftelya"));
    t_list *node3 = ft_lstnew(strdup("duran"));
    ft_lstadd_front(&node3, node2);
    ft_lstadd_front(&node3, node1);
    t_list *last = ft_lstlast(node3)
    printf("%s", (char *) lst -> content);
}
