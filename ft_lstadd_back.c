/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:38:24 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 10:41:10 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	ptr = *lst;
	if (!ptr)
	{
		*lst = new;
		return ;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

/*int main()
{
	t_list *node = ft_lstnew(strdup("hi"));
	t_list *node2 = ft_lstnew(strdup("1337"));
	node->next = node2;
	t_list *new = ft_lstnew(strdup("hello"));
	ft_lstadd_back(&node,new);
	while (node != NULL)
	{
		printf("%s\n",node->content);
		node = node->next;
	}
}*/
