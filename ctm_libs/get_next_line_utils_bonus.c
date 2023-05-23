/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:26:02 by gmattei           #+#    #+#             */
/*   Updated: 2022/12/01 10:26:03 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

size_t	ft_strleni(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	*my_free(char *s)
{
	free (s);
	return (NULL);
}

void	*my_malloc(int size)
{
	void	*p;

	p = malloc (size);
	if (!p)
		return (NULL);
	return (p);
}

char	*splitjoin(char *s1, char *s2, char *p)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[i])
	{
		p[x] = s2[i];
		x++;
		i++;
	}
	p[x] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;

	if (s1 == NULL)
	{
		s1 = (char *) my_malloc(1);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	p = my_malloc(sizeof(char) * ((ft_strleni(s1) + ft_strleni(s2) + 1)));
	p = splitjoin(s1, s2, p);
	free (s1);
	free (s2);
	return (p);
}
