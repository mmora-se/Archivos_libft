/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 11:22:10 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strlcat
*/
#include "libft.h"

int	main(void)
{
	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

	printf("strnstr: %s\n", strnstr(src, "is", 15));
	printf("ft_strnstr: %s\n", ft_strnstr(src, "is", 15));
	return (0);
}
