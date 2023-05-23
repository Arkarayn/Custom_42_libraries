/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:42:27 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/05 13:42:28 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

char	*ft_strnstr( char *s, char *need, unsigned int len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (need[0] == '\0')
	{
		return ((char *) s);
	}
	while (s[i] != '\0' && (unsigned int)i < len)
	{
		while (s[i + j] == need [j] && i + (unsigned int)j < len)
		{
			if (need[j + 1] == '\0')
			{
				return ((char *) &s[i]);
			}
			j ++;
		}
		j = 0;
		i++;
	}
	return (0);
}
