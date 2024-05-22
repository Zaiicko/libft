/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:13:57 by zaiicko           #+#    #+#             */
/*   Updated: 2024/04/09 00:18:46 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, s1, ft_strlen(s1) + 1));
}
