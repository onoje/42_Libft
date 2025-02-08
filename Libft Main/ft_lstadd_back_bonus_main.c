
int main(void)
{
    char a[6] = "hello"
    char b[6] = "world"
    char c[6] = "elf"
    t_list *node = ft_lstnew(&a);
    t_list *node1 = ft_lstnew(&b);
    t_list *node2 = ft_lstnew(&c);
    ft_lstadd_front(&node1, node);
    ft_lstadd_back(&node -> next, node2)
}