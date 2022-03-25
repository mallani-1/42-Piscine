/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:03:38 by mallani           #+#    #+#             */
/*   Updated: 2022/03/25 01:23:33 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocation(char const *s1, char const *set)
{
	size_t	n;
	int		i;
	int		j;
	char	*trim;

	n = ft_strlen (s1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
			n = n - 1;
			}
		j++;
		}
		i++;
	}
	trim = (char *)malloc(n + 1);
	return (trim);
}

static int	checking(char const *s1, char const *set, int i)
{
	int	j;
	int	f;

	f = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
			f = f + 1;
		j++;
	}
	return (f);
}

static char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		k;
	int		f;

	trim = allocation(s1, set);
	if (trim == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		f = 0;
		f = checking(s1, set, i);
		if (f == 0)
		{
			trim [k] = s1[i];
			k ++;
		}
		i++;
	}
	trim[k +1] = '\0';
	return (trim);
}
