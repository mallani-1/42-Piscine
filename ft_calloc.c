/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:48:27 by mallani           #+#    #+#             */
/*   Updated: 2022/03/18 16:16:16 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;

	if ((n == 0) || (size == 0))
		return (NULL);
	array = malloc(size * n);
	ft_bzero (array, n);
	return (array);
}
