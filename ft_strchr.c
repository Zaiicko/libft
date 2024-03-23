/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:17:06 by zaiicko           #+#    #+#             */
/*   Updated: 2024/03/23 22:12:09 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((unsigned char *)(s + i));
	return (NULL);
}
