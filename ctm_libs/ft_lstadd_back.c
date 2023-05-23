/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:49:18 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/15 11:49:18 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last -> next = new;
		}
		else
			*lst = new;
	}
}
