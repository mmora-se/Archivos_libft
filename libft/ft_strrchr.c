/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:29:09 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 09:38:16 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Si c = '\0' => devuelve puntero s + len
   Si el carácter c aparece en s => devuelve puntero al último c localizado
   Si el carácter c NO aparece en s => devuelve NULL 
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	size_t	len_s;

	ps = (char *)s;
	len_s = ft_strlen(s);
	if ((len_s > 0) && (c != '\0'))
	{
		ps = ps + (len_s - 1);
		while (len_s > 0)
		{
			if (*ps == (char)c)
				return (ps);
			len_s--;
			ps--;
		}
	}
	if (c == '\0')
		return (ps + len_s);
	return (0);
}
