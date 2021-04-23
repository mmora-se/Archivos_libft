/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 09:14:09 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 09:30:53 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_isascii comprueba si es un valor ascii (entre 0 y 127)

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
