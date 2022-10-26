/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:11:28 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/26 20:17:36 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	if (len > l)
		len = l - start;
	if (start + len > l)
		len--;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char s[] = "";
	printf("%s",ft_substr(s,0,6));
}*/
