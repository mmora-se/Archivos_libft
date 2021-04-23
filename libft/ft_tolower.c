/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:02:02 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 12:04:23 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convierte una letra mayúscula en minúscula
// sino es letra mayúscula, devuelve el carácter de entrada

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
