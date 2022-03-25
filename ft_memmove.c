/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:57:03 by mallani           #+#    #+#             */
/*   Updated: 2022/03/10 20:39:19 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (dest);
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		}
	}
	i = n;
	if (src < dest)
	{
		while (i--)
		{
			((char *)dest)[i] = ((char *)src)[i];
		}
	}
	return (dest);
}
