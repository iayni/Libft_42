/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:26:20 by iayni             #+#    #+#             */
/*   Updated: 2021/12/01 23:10:19 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstz)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	x = 0;
	while (dst[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (dstz == 0)
		return (x);
	while (src[j] && i + j < dstz - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (dstz < i)
		return (x + dstz);
	return (x + i);
}
