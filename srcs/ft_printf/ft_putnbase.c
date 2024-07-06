/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 02:14:17 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 21:59:54 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_putnbase(size_t nb, char *str)
{
	size_t	base;

	if (!str)
		return ;
	base = ft_strlen(str);
	if (nb >= base)
	{
		ft_putnbase(nb / base, str);
		ft_putnbase(nb % base, str);
	}
	if (nb < base)
		ft_putchar_f(str[nb]);
}
