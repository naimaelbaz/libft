/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:18:51 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/26 19:43:32 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_word(const char *s, char c)
{
	size_t	i;
	int		comp;

	i = 0;
	comp = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			comp++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (comp);
}

static size_t	lenth_word(const char *s, char c, int start)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[start + i])
	{
		if (s[start + i] && s[start + i] != c)
			j++;
		if (s[start + i] && s[start + i] == c)
			break ;
		i++;
	}
	return (j);
}

static void	free_ptr(char **ptr, int k)
{
	int	i;

	i = 0;
	while (k >= 0)
	{
		free(ptr[k]);
		ptr[k] = NULL;
		k--;
	}
	free(ptr);
}

static char	**spl(char **ptr, const char *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s && k < num_word(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ptr[k] = ft_substr((s + i), 0, lenth_word(s, c, i));
			if (ptr[k] == NULL)
				free_ptr(ptr, k);
			k++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	ptr[k] = NULL;
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (num_word(s, c) + 1));
	if (!ptr)
		return (NULL);
	spl(ptr, s, c);
	return (ptr);
}

// int    main(void)
// {
//     int i = 0;
//     char **result =  ft_split("\0aa\0bbb", '\0');
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
// }