/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:14:49 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/20 15:14:50 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_print(const char *str, va_list args)
{
	int	counter;
	int	res;

	counter = 0;
	if (*str == 'c')
	{
		res = va_arg(args, int);
		counter = write(1, &res, 1);
	}
	else if (*str == 's')
		counter = ft_putstr_plus_count(va_arg(args, char *));
	else if (*str == 'p')
		counter += ft_puthexp_plus_count(va_arg(args, unsigned long), 1);
	else if (*str == 'd' || *str == 'i')
		counter = ft_putnbr_plus_count(va_arg(args, int));
	else if (*str == 'u')
		counter = ft_putunbr_plus_count(va_arg(args, unsigned int));
	else if (*str == 'x' || *str == 'X')
		counter = ft_puthex_plus_count(va_arg(args, unsigned int), *str);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				result += write(1, "%", 1);
			else
				result += ft_print(&str[i + 1], args);
			i++;
		}
		else
			result += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (result);
}
