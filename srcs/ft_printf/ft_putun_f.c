/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:29 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:00:12 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putun_f(size_t nb, char *str)
{
	size_t	i;
	int		base;

	if (!str)
		return (0);
	i = 0;
	base = ft_strlen(str);
	ft_putnbase(nb, str);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
