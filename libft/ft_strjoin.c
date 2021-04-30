/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:53:00 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/30 10:58:40 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   s = La cadena de la que se extrae la nueva cadena 
   start = El índice del principio de la nueva cadena 
   len = El tamaño máximo de la nueva cadena.
   Retorna a nueva cadena de caracteres.
   Retorna NULL si falla la reserva de memoria.
   Reserva memoria con malloc y devuelve la cadena de caracteres 
   que proviene de la cadena pasada como argumento. 
   Esta nueva cadena comienza en el índice ’start’ y 
   tiene como tamaño máximo ’len’
   Tenemos 2 topes : len_s= longitud de s  y (start + len)
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	len_s;
	size_t	i;
	size_t	j;

	if ((s == 0) || (start < 0))
		return (0);
	len_s = ft_strlen(s);
	if (len_s <= len)
		p = (char *)malloc(sizeof(char) * (len_s + 1));
	else
		p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	j = 0;
	if ((start < len_s) && (len > 0))
	{
		i = start;
		while ((i < len_s) && (i < (start + len)))
			p[j++] = s[i++];
	}
	p[j] = '\0';
	return (p);
}
