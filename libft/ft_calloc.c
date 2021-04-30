/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:33:48 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 13:13:08 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función calloc () asigna de forma contigua suficiente espacio para 
   count objetos que tienen un size de bytes de memoria cada uno y 
   devuelve un puntero a la memoria asignada. 
   La memoria asignada está llena con bytes de valor cero.
   Si hay un error, devuelven un puntero NULL
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
