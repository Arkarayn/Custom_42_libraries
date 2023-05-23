/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_plus_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:21:05 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/21 15:21:06 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_puthex_plus_count(unsigned long n, char uppercase)
{
	int		counter;
	char	*alpha;

	counter = 0;
	if (uppercase == 'X')
		alpha = "ABCDEF";
	else
		alpha = "abcdef";
	if ((n / 16) == 0)
	{
		if ((n % 16) < 10)
			counter += ft_putnbr_plus_count(n % 16);
		else
			counter += write(1, &alpha[n % 16 - 10], 1);
		return (counter);
	}
	counter += ft_puthex_plus_count(n / 16, uppercase);
	if (n % 16 < 10)
		counter += ft_putnbr_plus_count(n % 16);
	else
		counter += write(1, &alpha[n % 16 - 10], 1);
	return (counter);
}
