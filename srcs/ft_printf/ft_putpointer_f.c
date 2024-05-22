/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_f.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:54:28 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/22 02:31:56 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putpointer_f(void *ptr, char *str)
{
	size_t	nb;
	size_t	i;
	int		base;

	if (!str)
		return (0);
	if (!ptr)
		return (ft_putstr_f("0x0"));
	nb = (size_t)ptr;
	base = ft_strlen(str);
	i = ft_putstr_f("0x");
	ft_putnbase(nb, str);
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
