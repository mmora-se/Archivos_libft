/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:29:49 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/26 11:30:51 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Compara n caracteres de las cadenas s1 y s2 de char terminadas '\0'. 
   El carácter `\ 0 'no se compara.
   Devuelve un número entero mayor, igual o menor que 0, 
   según que la cadena s1 sea mayor, igual o menor que la cadena s2.
   La comparación se realiza utilizando unsigned char.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (n && (*ps1 != '\0') && (*ps2 != '\0'))
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*ps1 - *ps2);
}
