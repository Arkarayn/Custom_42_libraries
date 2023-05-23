/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:05:08 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/04 14:05:09 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	int		i;
	char	*c;

	i = 0;
	c = malloc(nmemb * size);
	while ((unsigned int)i < nmemb)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
