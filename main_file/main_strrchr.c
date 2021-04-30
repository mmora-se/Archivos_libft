/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/28 09:10:30 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strlcat
*/
#include "libft.h"

int	main(void)
{
	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

	printf("strrchr: %s\n", strrchr(src, '\0'));
	printf("ft_strrchr: %s\n", ft_strrchr(src, '\0'));
	return (0);
}
