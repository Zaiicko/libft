/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:20:32 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:00:08 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putstr_f(char *str)
{
	size_t	i;

	if (!str)
		return (ft_putstr_f("(null)"));
	i = 0;
	while (str[i])
	{
		ft_putchar_f(str[i]);
		i++;
	}
	return (i);
}
