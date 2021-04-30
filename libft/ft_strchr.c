/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:11:33 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/27 14:30:11 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Si c = '\0' => devuelve s
   Si el carácter c aparece en s => devuelve un puntero al primer c localizado
   Si el carácter c NO aparece en s => devuelve NULL 
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;

	ps = (char *)s;
	while (*ps != '\0')
	{
		if (*ps == (char)c)
			return (ps);
		ps++;
	}
	if (c == '\0')
		return (ps);
	return (0);
}
