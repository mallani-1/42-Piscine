/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:06:43 by mallani           #+#    #+#             */
/*   Updated: 2022/03/14 22:49:39 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	dest_ln;

	i = ft_strlen(dest);
	dest_ln = i;
	j = 0;
	if (dest_size == 0)
		return (ft_strlen(src));
	while ((src[j] != '\0') && (i < dest_size -1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dest_size < dest_ln)
		dest_ln = dest_size;
	return (dest_ln + ft_strlen(src));
}
