/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:34:43 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/08 11:40:13 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strlen
*/
#include "libft.h"

size_t  ft_strlen(char *str);

int		main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	n = 0;
	s1 = "Hola compis\n";
	n = ft_strlen(s1);
	printf("Longitud = %d\n", n);
	n = 0;
	s2 = "de la piscina";
	n = ft_strlen(&s2[0]);
	printf("Longitud = %d\n", n);
	return (0);
}
