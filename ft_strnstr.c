/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:14:31 by mallani           #+#    #+#             */
/*   Updated: 2022/03/18 14:14:31 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((i < n) && haystack [i] != '\0')
	{
		if (needle[0] == haystack[i])
		a = i;
		while ((needle [j] != '\0') && (needle [j] == haystack [i]))
			j++;
		if (j == ft_strlen(needle))
			return ((char *)(haystack + a));
		i++;
	}
	return (NULL);
}
