/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:55:18 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/29 08:56:55 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escribe el carácter c sobre el descriptor de fichero proporcionado fd
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
