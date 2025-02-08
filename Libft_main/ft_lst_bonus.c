void	del(void *current)
{
	free(current);
}

int main()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	
	head = ft_lstnew(ft_strdup("Merhaba"));
	node1 = ft_lstnew(ft_strdup("Ben"));
	node2 = ft_lstnew(ft_strdup("Elif"));

	ft_lstadd_front(&node1, head);
	ft_lstadd_back(&node1, node2);

	//ft_lstdelone(node2, del);
	ft_lstclear(&head, del);

	//printf("Head: %s\n", head->content);
	//printf("Node1: %s\n", node1->content);
	//printf("Node2: %s\n", node2->content);

	// while(node1)
	// {
	// 	printf("Current: %s\n", node1->content);
	//	node1 = node1->next;
	// }

	printf("Size: %d\n", ft_lstsize(head));

}

// head
// head->content
// head->next