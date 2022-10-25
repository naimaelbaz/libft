/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:11:28 by nel-baz           #+#    #+#             */
/*   Updated: 2022/10/25 14:20:55 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;
	char	*str2;

	i = 0;
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	if (len > l)
		len = l - start;
	if (start + len > l)
		len--;
	str2 = (char *)(s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (str2[i] != '\0' && i < len)
	{
		str[i] = str2[i];
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
