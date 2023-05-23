/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:31:26 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/08 10:31:27 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	if (len == 0)
		return (1);
	return (len);
}

void	ft_itoacore(char *nb, int len, int n, int sign)
{
	nb[len--] = '\0';
	while (len >= 0)
	{
		if (len != 0 || sign != -1)
		{
			nb[len] = (n % 10) + 48;
		}
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		len;
	int		sign;

	sign = 0;
	if (n == -2147483648)
	{
		nb = ft_strdup("-2147483648");
		return (nb);
	}
	len = ft_intlen(n);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	nb = (char *)malloc(sizeof(char) * (len + 1));
	ft_itoacore(nb, len, n, sign);
	if (sign == -1)
		nb[0] = '-';
	return (nb);
}
