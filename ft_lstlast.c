/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:26:00 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 10:45:43 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list *node = ft_lstnew(strdup("hello"));
	t_list *next = ft_lstnew(strdup("hi"));
	node->next = next;
	t_list *lst = NULL;
	lst = ft_lstlast(node);
	printf("%s",lst->content);
}*/
