/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_plus_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:20:45 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/21 15:20:46 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_putnbr_plus_count(int n)
{
	int	res;
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		counter += write(1, "-2147483648", 11);
		return (counter);
	}
	if (n < 0)
	{
		n = -n;
		counter += write(1, "-", 1);
	}
	if (n > 9)
		counter += ft_putnbr_plus_count(n / 10);
	res = (n % 10) + 48;
	counter += write(1, &res, 1);
	return (counter);
}
