/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:08:22 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/27 09:39:47 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Si dest y src son nulos => devuelve 0
   Sino Devuelve la longitud de src.
   Calcula la longitud de src = srclen
   Si dstsize > 0:
      Si (dstsize - 1 <= srclen): copia de la cadena src a dst
	                              desde posición 0 hasta (dstsize - 2) 
                                  terminando dst[dstsize - 1] = '\0'
	  Si (dstsize - 1 > srclen): copia de la cadena src a dst
	                              desde posición 0 hasta (srclen -1)
                                  terminando dst[srclen] = '\0'
   Si las cadenas src y dst se superponen, el comportamiento no está definido. 
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			srclen;
	unsigned int	i;

	if (dst == 0 && src == 0)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while ((i < srclen) && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
