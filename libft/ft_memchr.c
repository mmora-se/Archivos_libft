/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:04:44 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/24 19:05:24 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Busca la primera aparición de c (convertido a unsigned char) en la cadena s
	- Si encuentra c dentro de los n primeros bytes, 
	  devuelve un puntero al byte donde se encuentra la primera ocurrencia de c
	- Si No encuentra c dentro de los n primeros bytes devuelve NULL.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	vc;
	unsigned char	*ps;
	size_t			i;

	if (n == 0)
		return (NULL);
	else
	{
		vc = (unsigned char)c;
		ps = (unsigned char *) s;
		i = 0;
		while ((i < n) && (ps[i] != vc))
			i++;
		if (i == n)
			return (NULL);
		else
			return (&ps[i]);
	}
}
