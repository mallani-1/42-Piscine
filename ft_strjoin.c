/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:25:52 by mallani           #+#    #+#             */
/*   Updated: 2022/03/23 03:42:53 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	result = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result [i] = s1 [i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result [i] = s2 [j];
		i++;
		j++;
	}
	result [i] = '\0';
	return (result);
}
