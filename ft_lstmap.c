/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:08:48 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 16:21:25 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	ptr = lst;
	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	while (ptr)
	{
		tmp = f(ptr->content);
		if (!tmp)
			ft_lstdelone(ptr, del);
		ptr = ptr->next;
	}
	return (ptr);
}
