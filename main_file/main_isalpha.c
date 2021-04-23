/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/19 11:09:25 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_isalpha
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada num %d\n", 42);
	printf("isalpha: %d\n", isdigit(42));
	printf("ft_isalpha: %d\n", ft_isalpha(42));
	printf("Entrada num %d\n", 73);
	printf("isalpha: %d\n", isdigit(73));
	printf("ft_isalpha: %d\n", ft_isalpha(73));
	printf("Entrada num %d\n", 114);
	printf("isalpha: %d\n", isdigit(114));
	printf("ft_isalpha: %d\n", ft_isalpha(114));
	printf("Entrada char %c\n", '*');
	printf("isalpha: %d\n", isdigit('*'));
	printf("ft_isalpha: %d\n", ft_isalpha('*'));
	printf("Entrada char %c\n", 'F');
	printf("isalpha: %d\n", isdigit('F'));
	printf("ft_isalpha: %d\n", ft_isalpha('F'));
	printf("Entrada char %c\n", 'x');
	printf("isalpha: %d\n", isdigit('x'));
	printf("ft_isalpha: %d\n", ft_isalpha('x'));
	return (0);
}
