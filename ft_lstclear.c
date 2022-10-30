/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:40:12 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 16:45:42 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		del(ptr->content);
		free(ptr);
		ptr = ptr->next;
	}
	*lst = NULL;
}

/*void	del(void *ptr)
{
	free(ptr);
}
int main()
{
	t_list *node = ft_lstnew(ft_strdup("hello"));
	t_list *node1 = ft_lstnew(ft_strdup("hi"));
	t_list *node2 = ft_lstnew(ft_strdup("1337"));
	node->next = node1;
	node1->next = node2;
	ft_lstclear(&node, del);
	while(node)
	{
		printf("%s",node->content);
		node = node->next;
	}
}*/
