/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:59:23 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/29 09:01:49 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Escribe la cadena de caracteres s sobre el
   descriptor de fichero proporcionado
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
