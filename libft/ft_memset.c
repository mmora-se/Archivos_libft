/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:11:03 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/22 10:25:25 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 Rellena las len primeras posiciones de la cadena b con el unsigned char c
	 Escribe len bytes con el valor c (convertidos a unsigned char) al string b
	 y devuelve el string b modificado.
	 len = número de posiciones iniciales  (size_t = unsigned int)
	 c   = unsigned char 
	 b   = puntero a cadena de caracteres
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
		*p++ = (unsigned char) c;
	return (b);
}
