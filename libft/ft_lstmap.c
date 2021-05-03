/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:25:04 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/03 14:27:07 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   *lst = dirección del puntero a un nodo.
   *f =  dirección de la función que hay que aplicar en la lista.
   *del =  dirección de la función que hay que aplicar sobre un elemento 
            para borrar ’content’, si es necesario
   Retorna nueva lista. 
           NULL si falla la asignación de memoria
   Realiza una iteración sobre la lista ’lst’ y aplica la función ’f’ 
   al contenido de cada elemento. 
   Crea una nueva lista que resulta de las aplicaciones sucesivas de ’f’.
   Si hay que eliminar el contenido de algún elemento => función ’del’ 
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*c;
	t_list	*p;
	t_list	*pnodo;

	p = 0;
	while (lst != NULL)
	{
		c = (*f)(lst->content);
		pnodo = ft_lstnew(c);
		if (pnodo == 0)
		{
			ft_lstclear(&p, del);
			return (0);
		}
		ft_lstadd_back(&p, pnodo);
		lst = lst->next;
	}
	return (p);
}
