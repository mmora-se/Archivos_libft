/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:15:08 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 15:23:08 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   lst = Principio de la lista
   Retorna el tamaño de la lista
   Cuenta el número de nodos de la lista
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
