/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:08:36 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 13:35:59 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Retorno: lista con 1 solo nodo.
   Reserva memoria con malloc y devuelve un nuevo nodo. 
   La variable ’content’ se inicializa mediante el valor de ’content’. 
   La variable ’next’ se inicializa con NULL
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = (t_list *) malloc(sizeof(t_list));
	if (l == 0)
		return (0);
	l->content = content;
	l->next = 0;
	return (l);
}
