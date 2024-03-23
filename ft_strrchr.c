/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:51:49 by zaiicko           #+#    #+#             */
/*   Updated: 2024/03/23 22:12:25 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((unsigned char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == ((unsigned char)c))
			return ((unsigned char *)(s + i));
		i--;
	}
	return (NULL);
}
