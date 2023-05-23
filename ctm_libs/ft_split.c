/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:26:25 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/07 17:26:26 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	flg;
	int	wc;

	wc = 0;
	i = 0;
	flg = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && flg == 1)
		{
			wc++;
			flg = 0;
		}
		else if (s[i] == c && flg == 0)
			flg = 1;
		i++;
	}
	return (wc);
}

int	ft_nextwordstart(const char *s, char c, int l)
{
	while (s[l] == c)
		l++;
	return (l);
}

int	ft_wdlen(const char *s, char c, int l)
{
	int	i;

	i = 0;
	while (s[l] != c && s[l] != '\0')
	{
		l++;
		i++;
	}
	return (i);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		l;
	int		wc;
	char	**splitted;

	wc = ft_wordcount(s, c);
	splitted = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	l = 0;
	while (i < wc)
	{
		j = 0;
		l = ft_nextwordstart(s, c, l);
		splitted[i] = malloc(sizeof(char) * (ft_wdlen(s, c, l) + 1));
		while (s[l] != c && s[l] != '\0')
			splitted[i][j++] = s[l++];
		splitted[i][j] = '\0';
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
