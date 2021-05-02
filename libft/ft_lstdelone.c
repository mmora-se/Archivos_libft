/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 17:00:24 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 17:41:27 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   lst = El nodo cuya memoria se debe liberar 
   *del = dirección de una función que borra el contenido del nodo
   Utilizando la función ’del’ = borra el contenido del nodo
   y después free = Libera la memoria de lst.
   No se debe liberar la memoria de ’next’
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
