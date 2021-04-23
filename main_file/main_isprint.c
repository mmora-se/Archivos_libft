/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 10:26:41 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_isprint
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 40);
	printf("Entrada char %c\n", 40);
	printf("isprint: %d\n", isprint(40));
	printf("ft_isprint: %d\n", ft_isprint(40));
	printf("Entrada num %d\n", 42);
	printf("Entrada char %c\n", 42);
	printf("isprint: %d\n", isprint(42));
	printf("ft_isprint: %d\n", ft_isprint(42));
	printf("Entrada num %d\n", 30);
	printf("Entrada char %c\n", 30);
	printf("isprint: %d\n", isprint(30));
	printf("ft_isprint: %d\n", ft_isprint(30));
	printf("Entrada num %d\n", 32);
	printf("Entrada char %c\n", 32);
	printf("isprint: %d\n", isprint(32));
	printf("ft_isprint: %d\n", ft_isprint(32));
	printf("Entrada num %d\n", 99);
	printf("Entrada char %c\n", 99);
	printf("isprint: %d\n", isprint(99));
	printf("ft_isprint: %d\n", ft_isprint(99));
	printf("Entrada num %d\n", 63);
	printf("Entrada char %c\n", 63);
	printf("isprint: %d\n", isprint(63));
	printf("ft_isprint: %d\n", ft_isprint(63));
	printf("Entrada num %d\n", 127);
	printf("Entrada char %c\n", 127);
	printf("isprint: %d\n", isprint(127));
	printf("ft_isprint: %d\n", ft_isprint(127));
	printf("Entrada num %d\n", 126);
	printf("Entrada char %c\n", 126);
	printf("isprint: %d\n", isprint(126));
	printf("ft_isprint: %d\n", ft_isprint(126));
	return (0);
}
