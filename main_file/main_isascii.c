/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 09:36:15 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_isascii
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 40);
	printf("Entrada char %c\n", 40);
	printf("isascii: %d\n", isascii(40));
	printf("ft_isascii: %d\n", ft_isascii(40));
	printf("Entrada num %d\n", 42);
	printf("Entrada char %c\n", 42);
	printf("isascii: %d\n", isascii(42));
	printf("ft_isascii: %d\n", ft_isascii(42));
	printf("Entrada num %d\n", 50);
	printf("Entrada char %c\n", 50);
	printf("isascii: %d\n", isascii(50));
	printf("ft_isascii: %d\n", ft_isascii(50));
	printf("Entrada num %d\n", 66);
	printf("Entrada char %c\n", 66);
	printf("isascii: %d\n", isascii(66));
	printf("ft_isascii: %d\n", ft_isascii(66));
	printf("Entrada num %d\n", 99);
	printf("Entrada char %c\n", 99);
	printf("isascii: %d\n", isascii(99));
	printf("ft_isascii: %d\n", ft_isascii(99));
	printf("Entrada num %d\n", 63);
	printf("Entrada char %c\n", 63);
	printf("isascii: %d\n", isascii(63));
	printf("ft_isascii: %d\n", ft_isascii(63));
	printf("Entrada num %d\n", 127);
	printf("Entrada char %c\n", 127);
	printf("isascii: %d\n", isascii(127));
	printf("ft_isascii: %d\n", ft_isascii(127));
	printf("Entrada num %d\n", 140);
	printf("Entrada char %c\n", 140);
	printf("isascii: %d\n", isascii(140));
	printf("ft_isascii: %d\n", ft_isascii(140));
	return (0);
}
