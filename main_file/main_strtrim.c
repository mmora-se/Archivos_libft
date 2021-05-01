/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/01 10:37:36 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strtrim
*/
#include "libft.h"

int	main(void)
{
	char	*s;
	char	*m;

	s = ft_strtrim("aeiHmoaslue", "aeiou");
	printf("salida strtrim = %s\n", s);
	m = ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t");
	printf("salida strtrim = %s\n", m);
	free(s);
	return (0);
}
