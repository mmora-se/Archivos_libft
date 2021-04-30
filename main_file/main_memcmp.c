/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/26 09:38:39 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_memcmp
*/
#include "libft.h"

int	main(void)
{
	printf("4975gf2kp\n");
	printf("memcmp: %d\n", memcmp("\xff\xaa\xde\x12", "\xff\xaa\xde\x12MACOSAAAAA", 4));
	printf("ft_memchr: %d\n", ft_memcmp("\xff\xaa\xde\x12", "\xff\xaa\xde\x12MACOSAAAAA", 4));
	printf("memcmp: %d\n", memcmp("4975", "4975", 8));
	printf("ft_memchr: %d\n", ft_memcmp("4975", "4975", 8));
	printf("memcmp: %d\n", memcmp("4975", "49a5", 5));
	printf("ft_memchr: %d\n", ft_memcmp("4975", "49a5", 5));
	printf("memcmp: %d\n", memcmp("49e5", "49B5", 5));
	printf("ft_memchr: %d\n", ft_memcmp("49e5", "49B5", 5));
	printf("ft_memchr: %d\n", memcmp(NULL, "2", 8));
	printf("memcmp: %d\n", ft_memcmp(NULL, "2", 8));
	return (0);
}
