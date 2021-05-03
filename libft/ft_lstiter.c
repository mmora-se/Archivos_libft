/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:43:47 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/03 11:58:03 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*lst = dirección del puntero a un nodo. 
	*f   = dirección de la función que hay que aplicar
	Realiza una iteración sobre la lista ’lst’ y 
	aplica la función ’f’ al contenido de cada nodo
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		len;
	t_list	*p;

	if (lst != NULL)
	{
		len = ft_lstsize(lst);
		p = lst;
		while (len)
		{
			(*f)(p->content);
			p = p->next;
			len--;
		}
	}	
}
