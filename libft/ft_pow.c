/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:08:15 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/17 17:10:27 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int base, int exp)
{
	int	n;

	n = 1;
	if (exp < 0)
		write(1, "Error exp negative/n", 19);
	else if (exp == 0)
		n = 1;
	else
		n = ft_pow(base, exp - 1) * base;
	return (n);
}
