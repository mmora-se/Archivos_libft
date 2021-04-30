/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/24 19:10:50 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_memchr
*/
#include "libft.h"

int	main(void)
{
	printf("4975gf2kp\n");
	printf("memchr: %p\n", memchr("4975gf2kp", '2', 100));
	printf("ft_memchr: %p\n", ft_memchr("4975gf2kp", '2', 100));
	printf("memchr: %p\n", ft_memchr(NULL, '2', 8));
	printf("ft_memchr: %p\n", memchr(NULL, '2', 8));
	return (0);
}
