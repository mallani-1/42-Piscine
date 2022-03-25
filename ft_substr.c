/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:29:14 by mallani           #+#    #+#             */
/*   Updated: 2022/03/23 03:34:19 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*result;

	i = 0;
	j = 0;
	result = (char *)malloc (len);
	if (result == NULL)
		return (NULL);
	while ((j < len) && (s[i] != '\0'))
	{
		if (i >= start)
		{
			result[j] = s[i];
			j++;
		}
	i++;
	}
	result [j] = '\0';
	return (result);
}
