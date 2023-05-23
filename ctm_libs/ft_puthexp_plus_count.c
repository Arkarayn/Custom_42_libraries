/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp_plus_count.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:08:41 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/26 11:08:42 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_puthexp_plus_count(unsigned long n, int x)
{
	char	*alpha;
	int		counter;

	counter = 0;
	alpha = "abcdef";
	if (n == 0)
		return (write(1, "(nil)", 5));
	if (x == 1)
		counter += write(1, "0x", 2);
	if ((n / 16) == 0)
	{
		if ((n % 16) < 10)
			counter += ft_putnbr_plus_count(n % 16);
		else
			counter += write(1, &alpha[n % 16 - 10], 1);
		return (counter);
	}
	counter += ft_puthexp_plus_count(n / 16, 0);
	if (n % 16 < 10)
		counter += ft_putnbr_plus_count(n % 16);
	else
		counter += write(1, &alpha[n % 16 - 10], 1);
	return (counter);
}
