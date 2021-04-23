/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/22 13:14:34 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_bzero
*/
#include "libft.h"

int	main(void)
{
	size_t	l;
	char	e[20] = "Hola soy Mora Moreta";
	char	eu[20] = "Hola soy Mora Moreta";
	char	a[30] = "Hace un día lluvioso";
	char	au[30] = "Hace un día lluvioso";
	
	l=5;
	printf("Entrada bzero: %s\n", e);
	bzero(e, l);
	printf("Salida bzero: %c\n", e[9]);
	printf("Entrada ft_bzero: %s\n", eu);
	ft_bzero(eu, l);
	printf("Salida ft_bzero: %c\n", eu[9]);
	printf("Entrada bzero: %s\n", a);
	l = 0;
	bzero(a, l);
	printf("Salida bzero: %s\n", a);
	printf("Entrada ft_bzero: %s\n", au);
	ft_bzero(au,(size_t) 0);
	printf("Salida ft_bzero: %s\n", au);
	return (0);
}
