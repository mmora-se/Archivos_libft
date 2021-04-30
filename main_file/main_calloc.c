/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 13:07:18 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_calloc
*/
#include "libft.h"

int	main(void)
{
	char	*src;

	src = (char *) ft_calloc(0, 0);
	printf("ft_calloc: %p\n", src);
	printf("ft_calloc: %s\n", src);
	free(src);
	return (0);
}
