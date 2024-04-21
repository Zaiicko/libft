/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:44:05 by zaiicko           #+#    #+#             */
/*   Updated: 2024/04/21 03:47:40 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_intlen(int nb)
{
	size_t i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);	
}