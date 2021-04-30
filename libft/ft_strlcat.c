/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:58:26 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/27 12:55:09 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Devuelve la longitud = L + long(src).
   Si (dstsize <= long(dst)= i) => L = dstsize.
   Si (dstsize > long(dst)= i) => L = i = long(dst).
   Sólo si (long(dst)= i < dstsize ) => 
        concatena al final de dst, la cadena src 
   
   Anexará como máximo dstsize - strlen (dst) - 1 caracteres.
   Luego terminará en NUL, a menos que dstsize sea 0 o la cadena dst original
   fuera más larga que dstsize (en la práctica esto no debería suceder 
   ya que significa que dstsize es incorrecto o 
   que dst no es una cadena adecuada).
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	j;
	size_t			len_total;

	i = ft_strlen(dst);
	len_total = ft_strlen(src);
	if (dstsize <= i)
		len_total = len_total + dstsize;
	else
		len_total = len_total + i;
	if (i < dstsize)
	{
		j = 0;
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len_total);
}
