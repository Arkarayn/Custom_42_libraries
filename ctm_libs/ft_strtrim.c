/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:19:08 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/07 11:19:09 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	reverse_check(char *s1, char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (j == ft_strlen(set))
			break ;
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	char	*c;

	c = malloc(sizeof(char) * ft_strlen(s1));
	if (c == NULL)
		return (c);
	while (*s1)
	{
		i = 0;
		while (set[i])
		{
			if (*s1 == set[i])
				break ;
			i++;
		}
		if (i == ft_strlen(set))
			break ;
		s1++;
	}
	if (s1[0] == '\0')
	{
		c[0] = '\0';
		return (c);
	}
	return (ft_substr(s1, 0, reverse_check(s1, set)));
}
