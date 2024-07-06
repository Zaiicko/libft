/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:57:20 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:01:40 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_itoa(int n)
{
	size_t		i;
	char		*str;
	long int	nb;

	i = ft_intlen(n);
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		i++;
	}
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[i] = 0;
	while (i > 0)
	{
		i--;
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
