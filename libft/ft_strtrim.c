/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:04:44 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/01 11:13:37 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   s1 = La cadena de caracteres que hay que depurar. 
   set = caracteres que hay que retirar del principio y del final
   Quita de los extremos los caracteres que estén en el set
   Devuelve la cadena de caracteres depurada. 
   NULL si falla la reserva de memoria
   Reserva memoria con malloc y devuelve la cadena de caracteres
   que es una copia de ’s1’, sin los caracteres indicados en el ’set’ 
   al principio y al final de la cadena de caracteres.
   ok == 1 = sí está el char en el set
   ok == 0 = no encuentra el char en set
*/
#include "libft.h"

int	ft_find(char const *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	len_s1;
	int		i;
	int		j;

	if (s1 == 0)
		return (0);
	len_s1 = ft_strlen(s1);
	if (set == 0)
		return ((char *)s1);
	i = 0;
	p = 0;
	while (s1[i] != '\0' && ft_find(set, s1[i]) == 1)
		    i++;
	if (s1[i] == '\0' || (len_s1 == 0))
	{
		p = (char *)malloc(1);
		*p = '\0';
		return (p);
	}
	j = len_s1 - 1;
	while ((i < j) && (ft_find(set, s1[j]) == 1))
		j--;
	p = ft_substr(s1, i, ((j + 1) - i));
	return (p);
}
