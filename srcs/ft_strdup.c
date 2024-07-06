/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:13:57 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:03:04 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, s1, ft_strlen(s1) + 1));
}
