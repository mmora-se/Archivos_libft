/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/23 15:37:10 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_memcpy
*/
#include "libft.h"

int	main(void)
{
	char	dest[50] = "Buenos dias";
	char	src[5] = "Hola";

	printf("Before memcpy dest = %s\n", dest);
	printf("memcpy: %p\n", memcpy(dest, src, 3));
	printf("memcpy: %s\n", memcpy(dest, src, 3));
	printf("After memcpy dest = %s\n", dest);
	printf("memcpy: %p\n", memcpy("Buenos dias", "Hola", 0));
	printf("ft_memcpy: %p\n", ft_memcpy("Buenos dias", "Hola", 0));
	return (0);
}
