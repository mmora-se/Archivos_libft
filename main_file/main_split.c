/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/01 16:55:53 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_split
*/
#include "libft.h"

int	main(void)
{
	char	**s;

	printf("XXholaXmeXXXllamoXmariaXpilarXX\n");
	s = ft_split("XXholaXmeXXXllamoXmariaXpilarXX", 'X');
	while (*s)
	{
		printf("cadena = %s\n", *s);
		s++;
	}
	return (0);
}
