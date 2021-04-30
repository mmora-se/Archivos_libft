/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:03:06 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/26 10:09:11 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Compara la cadena de bytes s1 con la s2. 
   Se supone que ambas cadenas tienen una longitud de n bytes.
   -Si las dos cadenas son idénticas devuelve 0
	Las cadenas de longitud cero son siempre idénticas
   -Sino devuelve la diferencia entre los dos primeros bytes diferentes 
    tratados como unsigned char

*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (n--)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
	}
	return (0);
}
