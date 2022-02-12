/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:28:54 by iayni             #+#    #+#             */
/*   Updated: 2021/12/01 23:12:05 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	if (!c)
		return ((char *)str + i);
	if (!*str)
		return (NULL);
	while (str[--i] && i)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	if (str[i] == (char)c && *str)
		return ((char *) &str[i]);
	return (NULL);
}
