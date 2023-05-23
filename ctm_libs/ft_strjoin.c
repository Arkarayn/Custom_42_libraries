/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:59:11 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/07 10:59:13 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*c;

	i = 0;
	c = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (c == NULL)
		return (c);
	while (*s1)
	{
		c[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		c[i] = *s2;
		i++;
		s2++;
	}
	c[i] = '\0';
	return (c);
}
