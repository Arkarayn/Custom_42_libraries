/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:42:10 by gmattei           #+#    #+#             */
/*   Updated: 2022/10/15 10:42:11 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctm_libs.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list -> content = content;
	list -> next = NULL;
	return (list);
}
