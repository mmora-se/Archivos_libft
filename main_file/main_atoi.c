/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/21 12:25:27 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_atoi
*/
#include "libft.h"

int	main(void)
{
	printf("Entrada %s\n", " -1234ab567");
	printf("atoi: %d\n", atoi(" -1234ab567"));
	printf("ft_atoi: %d\n", ft_atoi(" -1234ab567"));
	printf("Entrada %s\n", " +123456789ab567");
	printf("atoi: %d\n", atoi(" +123456789ab567"));
	printf("ft_atoi: %d\n", ft_atoi(" +123456789ab567"));
	printf("Entrada %s\n", " -5294967295ab567");
	printf("atoi: %d\n", atoi(" -5294967295ab567"));
	printf("ft_atoi: %d\n", ft_atoi(" -5294967295ab567"));
	printf("Entrada %s\n", "-2147483648");
	printf("atoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("Entrada %s\n", "  -2147483650");
	printf("atoi: %d\n", atoi("  -2147483650"));
	printf("ft_atoi: %d\n", ft_atoi("  -2147483650"));
	printf("Entrada %s\n", "2147483647");
	printf("atoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("Entrada %s\n", "  +2147483653");
	printf("atoi: %d\n", atoi("  +2147483653"));
	printf("ft_atoi: %d\n", ft_atoi("  +2147483653"));
	return (0);
}
