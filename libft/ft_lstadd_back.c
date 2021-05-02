/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 16:17:40 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 16:47:13 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   lst = dirección del puntero al primer elemento de la lista. 
   new = dirección del puntero al nodo que hay que añadir a la lista
   Añade el elemento ’new’ al final de la lista
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = ft_lstlast(*lst);
	if (l == NULL)
		*lst = new;
	else
		l->next = new;
}
