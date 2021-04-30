/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:22:11 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/24 16:11:55 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copia len bytes de la cadena src a la cadena dst
	Si dst y src se superponen,la copia se realiza de forma no destructiva
	Devuelve un puntero al puntero dst.
	-Para el caso de NO solapamiento (dst <= src) la posición de memoria inicial 
	 de dest <= src se copiarán len posiciones de src en dst, 
	 de izquierda a derecha (-->).
	-Para el caso de solapamiento (dst > src) es decir al informar dst 
	 puedo estar machacando posiciones de src, antes de terminar de copiar 
	 las len posiciones de src a dest. Entonces se copiarán len posiciones 
	 de src en dst, de derecha a izquierda(<--).
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	if (len == 0)
		return (dst);
	else
	{
		if (dst == 0 && src == 0)
			return (NULL);
		i = 0;
		pd = (unsigned char *) dst;
		ps = (unsigned char *) src;
		if (dst <= src)
			while (i++ < len)
				*pd++ = *ps++;
		else
			while (i++ < len)
				pd[len - i] = ps[len - i];
		return (dst);
	}
}
