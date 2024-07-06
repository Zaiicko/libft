/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:22:42 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 21:59:57 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void	ft_putnbr_f(int nb)
{
	long	i;

	i = (long)nb;
	if (i < 0)
	{
		ft_putchar_f('-');
		i *= -1;
	}
	if (i > 9)
		ft_putnbr_f(i / 10);
	ft_putchar_f((i % 10) + 48);
}

ssize_t	ft_putnbr_int(ssize_t nb)
{
	size_t	i;

	i = 0;
	ft_putnbr_f(nb);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
