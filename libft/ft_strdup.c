/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:30:32 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 15:20:32 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Si no hay suficiente memoria disponible, se devuelve NULL
	Asigna suficiente memoria para una copia de la cadena s1
	Hace la copia y devuelve un puntero a la copia
	El puntero se puede utilizar después como un argumento para free
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
