/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/23 20:56:05 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_memccpy
*/
#include "libft.h"

int	main(void)
{
	char	dest[50] = "AAAAAAAAAAAAAAAAAAA";
	char	src[5] = "42";

	printf("Before memccpy dest = %s\n", dest);
	printf("memccpy: %s\n", memccpy(dest, "42", '2', 1));
	printf("memccpy: %s\n", dest);
	printf("After memcpy dest = %s\n", dest);
	//printf("memcpy: %p\n", memcpy("Buenos dias", "Hola", 0));
	//printf("ft_memcpy: %p\n", ft_memcpy("Buenos dias", "Hola", 0));
	return (0);
}
