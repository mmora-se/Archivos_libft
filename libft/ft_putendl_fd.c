/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:17:41 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/29 09:27:21 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escribe la cadena de caracteres ’s’ sobre el
	descriptor de fichero proporcionado, seguida de
	un salto de línea
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
