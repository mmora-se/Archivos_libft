/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/29 13:29:21 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_putnbr_fd
*/
#include "libft.h"

int	main(void)
{
	int		i;
	char	*s;

	i = -7483648;
	s = ft_itoa(i);
	printf("num = %d\n", i);
	printf("num = %s\n", s);
	return (0);
}
