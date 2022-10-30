/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:01:00 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 09:57:46 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	tmp;

	tmp = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		tmp++;
	}
	return (tmp);
}

/*int main()
{
	t_list *node =ft_lstnew(strdup("hello"));
	t_list *new = ft_lstnew(strdup("1337"));
	t_list *next =ft_lstnew(strdup("hi"));
	node->next = new;
	new->next = next;
	int tmp = ft_lstsize(node);
	printf("%d",tmp);
}*/
