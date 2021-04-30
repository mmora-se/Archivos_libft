/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 09:43:49 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 11:19:44 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Si needle es una cadena vacía => retorna haystack;
   Si needle no aparece en los len primeros chars de haystack=> retorna NULL;
   Sino retorna puntero al primer carácter de la primera aparición de needle
   Localiza la primera aparición de needle en haystack,
   donde no más de len caracteres son buscados.
   Sólo buscamos needle, dentro de los len primeros cracteres de haystack.
   Los caracteres que aparecen después de un carácter '\ 0' no se buscan.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && (i < len))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j]) && (needle[j] != '\0')
				&& (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
