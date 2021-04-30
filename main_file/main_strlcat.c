/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/27 12:26:42 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strlcat
*/
#include "libft.h"

int	main(void)
{
	char	*dest;
	
    memset(dest, 0, 15);
	memset(dest, 'r', 6);
	memset(dest, 'r', 15);
	printf("strlcat: %lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	printf("strlcat: %s\n", dest);
	return (0);
}
