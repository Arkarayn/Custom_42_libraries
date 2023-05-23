/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixcsearch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 03:14:41 by gmattei           #+#    #+#             */
/*   Updated: 2023/02/03 03:14:42 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

int	ft_mtxcsrc(char **matrix, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (matrix[i][0])
	{
		x += ft_strcsrc(matrix[i], c);
		i++;
	}
	return (x);
}
