/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/19 14:52:10 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_isalnum
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 4);
	printf("isalnum: %d\n", isalnum(4));
	printf("ft_isalnum: %d\n", ft_isalnum(4));
	printf("Entrada char %c\n", '7');
	printf("isalnum: %d\n", isalnum('7'));
	printf("ft_isalnum: %d\n", ft_isalnum('7'));
	printf("Entrada char %c\n", 'k');
	printf("isalnum: %d\n", isalnum('k'));
	printf("ft_isalnum: %d\n", ft_isalnum('k'));
	printf("Entrada char %c\n", '*');
	printf("isalnum: %d\n", isalnum('*'));
	printf("ft_isalnum: %d\n", ft_isalnum('*'));
	printf("Entrada char %c\n", '9');
	printf("isalnum: %d\n", isalnum('9'));
	printf("ft_isalnum: %d\n", ft_isalnum('9'));
	printf("Entrada char %c\n", 'A');
	printf("isalnum: %d\n", isalnum('A'));
	printf("ft_isalnum: %d\n", ft_isalnum('A'));
	return (0);
}
