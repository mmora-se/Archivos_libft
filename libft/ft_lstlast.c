/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:34:46 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 15:51:37 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    lst = Principio de la lista
	Retorna último elemento de la lista
	Devuelve el último elemento de la lista
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	if (len == 0)
		return (lst);
	while (--len)
	{
		lst = lst->next;
	}
	return (lst);
}
