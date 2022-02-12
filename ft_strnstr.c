/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:18:17 by iayni             #+#    #+#             */
/*   Updated: 2021/12/01 23:12:14 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
