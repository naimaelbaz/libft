/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:09:13 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/30 16:01:58 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
/*void f(void *content)
{
	int i;
	
	i = 0;
	while(((char *)content)[i])
	{
		((char *)content)[i] = 'A';
		i++;
	}
}
int main()
{
	t_list *node = ft_lstnew(ft_strdup("hola"));
	t_list *node1 = ft_lstnew(ft_strdup("hi"));
	t_list *node2 = ft_lstnew(ft_strdup("1337"));
	node->next = node1;
	node1->next = node2;
	ft_lstiter(node,f);
	while(node)
	{
		printf("%s\n",node->content);
		node = node->next;
	}
}*/
