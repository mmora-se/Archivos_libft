/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:50 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/30 13:42:02 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   s1 = cadena de caracteres prefijo. 
   s2 = cadena de caracteres sufijo
   Retorna la nueva cadena de caracteres. Y NULL si falla la reserva de memoria
   Reserva memoria con malloc y devuelve la nueva cadena de caracteres que 
   resulta de la concatenación de s1 y s2
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;
	size_t	j;

	if ((s1 == 0) || (s2 == 0))
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * ((len_s1 + len_s2) + 1));
	if (p == 0)
		return (0);
	j = 0;
	while (*s1 != '\0')
		p[j++] = *s1++;
	while (*s2 != '\0')
		p[j++] = *s2++;
	p[j] = '\0';
	return (p);
}
