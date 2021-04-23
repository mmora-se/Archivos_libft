/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:42:21 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/23 15:19:51 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 Copia n bytes del área de memoria src al área de memoria dst
	 Si dst y src se superponen, el comportamiento no está definido
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (n == 0)
		return (dst);
	else
	{
		if (dst == 0 && src == 0)
			return (NULL);
		pd = (unsigned char *) dst;
		ps = (unsigned char *) src;
		while (n--)
			*pd++ = *ps++;
		return (dst);
	}
}
