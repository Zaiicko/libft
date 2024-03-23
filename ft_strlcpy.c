/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:22:42 by zaiicko           #+#    #+#             */
/*   Updated: 2024/03/23 13:03:15 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (size > 0)
	{
		if (i < size)
			ft_memcpy(dest, src, i + 1);
		else
		{
			ft_memcpy(dest, src, size - 1);
			dest[size - 1] = '\0';
		}
	}
	return (i);
}
