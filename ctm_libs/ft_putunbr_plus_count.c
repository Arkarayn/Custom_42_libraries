/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_plus_count.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:21:19 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/21 15:21:20 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_putunbr_plus_count(long int n)
{
	int		counter;
	char	res;

	counter = 0;
	if (n > 9)
		counter += ft_putunbr_plus_count(n / 10);
	res = (n % 10) + 48;
	counter += write(1, &res, 1);
	return (counter);
}
