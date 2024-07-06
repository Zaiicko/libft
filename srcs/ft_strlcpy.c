/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:22:42 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:03:19 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

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
