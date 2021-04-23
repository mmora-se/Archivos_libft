/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/19 13:25:18 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_isdigit
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 4);
	printf("isdigit: %d\n", isdigit(4));
	printf("ft_isdigit: %d\n", ft_isdigit(4));
	printf("Entrada char %c\n", '7');
	printf("isdigit: %d\n", isdigit('7'));
	printf("ft_isdigit: %d\n", ft_isdigit('7'));
	printf("Entrada char %c\n", 'k');
	printf("isdigit: %d\n", isdigit('k'));
	printf("ft_isdigit: %d\n", ft_isdigit('k'));
	printf("Entrada char %c\n", '*');
	printf("isdigit: %d\n", isdigit('*'));
	printf("ft_isdigit: %d\n", ft_isdigit('*'));
	printf("Entrada char %c\n", '9');
	printf("isdigit: %d\n", isdigit('9'));
	printf("ft_isdigit: %d\n", ft_isdigit('9'));
	printf("Entrada char %c\n", '0');
	printf("isdigit: %d\n", isdigit('0'));
	printf("ft_isdigit: %d\n", ft_isdigit('0'));
	return (0);
}
