/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_plus_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:20:31 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/21 15:20:32 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_putstr_plus_count(char *s)
{
	int	i;
	int	counter;

	if (s == 0)
		return (write(1, "(null)", 6));
	i = 0;
	counter = 0;
	while (s[i])
		counter += write(1, &s[i++], 1);
	return (counter);
}
