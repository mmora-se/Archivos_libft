/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 09:13:13 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/03 11:02:22 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	lst = dirección del puntero a un elemento.
	(*del) =dirección de la función del que permite suprimir 
				el contenido de un elemento
	Suprime y libera la memoria de la lista pasada como parámetro y de todos
	los elementos siguientes, con ’del’ y free (esto lo hará con ft_lstdelone)
	Por último, el puntero inicial debe pasar a NULL.
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			p = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = p;
		}
	}
}
