/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/26 11:27:43 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strncmp
*/
#include "libft.h"

int	main(void)
{
	printf("strncmp: %d\n", strncmp("\200", "\0", 8));
	printf("ft_strncmp: %d\n", ft_strncmp("\200", "\0", 8));
	printf("strncmp: %d\n", strncmp("4975", "4975", 4));
	printf("ft_strncmp: %d\n", ft_strncmp("4975", "4975", 4));
	printf("strncmp: %d\n", strncmp("49e5", "49B5", 5));
	printf("ft_strncmp: %d\n", ft_strncmp("49e5", "49B5", 5));
	printf("strncmp: %d\n", strncmp("49e5", "49B5", 2));
	printf("ft_strncmp: %d\n", ft_strncmp("49e5", "49B5", 2));
	return (0);
}
