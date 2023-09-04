/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:46 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/06 15:22:47 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

char	*ft_substr(char *s, unsigned int start, unsigned int len)
{
	char			*c;
	unsigned int	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		c = malloc(1 * sizeof(char));
		c[0] = '\0';
		return (c);
	}
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (c);
	while (i < len && s[start] != '\0')
	{
		c[i] = s[start];
		i++;
		start++;
	}
	c[i] = '\0';
	return (c);
}
