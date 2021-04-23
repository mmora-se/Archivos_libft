/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 12:15:42 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_toupper ft_tolower
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 42);
	printf("Entrada char %c\n", 42);
	printf("toupper: %d\n", toupper(42));
	printf("ft_toupper: %d\n", ft_toupper(42));
	printf("Entrada num %d\n", 104);
	printf("Entrada char %c\n", 104);
	printf("toupper: %d\n", toupper(104));
	printf("ft_toupper: %d\n", ft_toupper(104));
	printf("Entrada num %d\n", 73);
	printf("Entrada char %c\n", 73);
	printf("toupper: %d\n", toupper(73));
	printf("ft_toupper: %d\n", ft_toupper(73));
	printf("Entrada num %d\n", 63);
	printf("Entrada char %c\n", 63);
	printf("toupper: %d\n", toupper(63));
	printf("ft_toupper: %d\n", ft_toupper(63));
	return (0);
}
