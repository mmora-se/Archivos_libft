/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:34:35 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/24 12:04:16 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copia cadena src hasta que se encuentre el carácter c
	Copia n bytes de la cadena src a la cadena dst
	hasta que se encuentre el carácter c
	Si el char c (convertido a un unsigned char) ocurre en la cadena src, 
	entonces la copia se detiene y un puntero al byte después de copiar c 
	en la cadena dst. De lo contrario, n bytes son copiados y 
	se devuelve un puntero NULL.
	Las cadenas de origen y destino no deben superponerse, 
	ya que el comportamiento no está definido.
	- Si c existe en src y está antes de n: 
			en dst : copia hasta c
			la función devuelve un puntero a dst, al byte después de c 
	- Si c No existe en src ó está después de n bytes:
	        en dst : copia n bytes de src
			la función devuelve un puntero NULL
*/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	vc;
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	if (dst == 0 && src == 0)
		return (NULL);
	vc = (unsigned char)c;
	pd = (unsigned char *) dst;
	ps = (unsigned char *) src;
	i = 0;
	while ((i < n) && (*ps != vc))
	{
		*pd++ = *ps++;
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		*pd = vc;
		pd++;
		return (pd);
	}
}
