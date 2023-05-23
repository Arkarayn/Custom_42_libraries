/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:29:58 by gmattei          #+#    #+#             */
/*   Updated: 2022/07/19 11:34:03 by gmattei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

size_t	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	dst_len;

	i = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	y = 0;
	if (size && (unsigned int)ft_strlen(dst) <= size)
	{
		while (src[y] != '\0' && i < (size - 1))
		{
			dst[i] = src[y];
			i++;
			y++;
		}
		dst[i] = '\0';
	}
	if (size == 0)
		dst_len = 0;
	if (size < dst_len)
		dst_len = size;
	return (dst_len + ft_strlen((char *)src));
}
