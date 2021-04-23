/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/22 10:34:28 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_memset
*/
#include "libft.h"

int	main(void)
{
	char	e[20] = "Hola soy Mora Moreta";
	char	m[6];
	char	v[0];
	char	w[25];

	printf("Entrada: %s c= %c len = %lu\n", e, 'x', sizeof(m));
	printf("memset: %s\n", memset(e, 'x', sizeof(m)));
	printf("ft_memset: %s\n", ft_memset(e, 'x', sizeof(m)));
	printf("Entrada: %s c= %c len =%lu\n", "Hola soy Mora Moreta", 'Y', sizeof(v));
	printf("memset: %s\n", memset("Hola soy Mora Moreta", 'Y', sizeof(v)));
	printf("ft_memset: %s\n", ft_memset("Hola soy Mora Moreta", 'Y', sizeof(v)));
	printf("Entrada: %s c= %c len =%lu\n", "Hola soy Mora Moreta", 'Z', sizeof(w));
	printf("ft_memset: %s\n", ft_memset("Hola soy Mora Moreta", 'Z', sizeof(w)));
	printf("memset: %s\n", memset("Hola soy Mora Moreta", 'Z', sizeof(w)));
	return (0);
}
