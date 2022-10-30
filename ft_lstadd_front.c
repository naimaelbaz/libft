/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:07:06 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 09:02:57 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main()
{
	t_list *node = malloc(sizeof(t_list));
	node->content = "hello";
	node->next = NULL;
	t_list *new = malloc(sizeof(t_list));
	new->content = "1337";
	new->next = NULL;
	ft_lstadd_front(&node,new);
	while(node != NULL)
	{
		printf("%s\n",node->content);
		node = node->next;
	}
}*/
