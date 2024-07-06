/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:40:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 21:59:46 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			i += ft_checking_f(&arg, *str);
		}
		else
			i += ft_putchar_f(*str);
		str++;
	}
	va_end(arg);
	return (i);
}
