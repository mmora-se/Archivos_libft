/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/27 09:38:49 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_strlcpy
*/
#include "libft.h"

int	main(void)
{
	char	*sr;

	printf("strlcpy: %lu\n", ft_strlcpy(sr, "aeiou", 10));
	printf("strlcpy: %s\n", sr);
	return (0);
}
