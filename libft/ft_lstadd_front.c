/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:23:02 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 15:02:36 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   alst = dirección del puntero al primer elemento de la lista
   new = dirección del puntero al elemento que hay que añadir a la lista
   Añade el elemento ’new’ al principio de la lista alst

*/
#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
