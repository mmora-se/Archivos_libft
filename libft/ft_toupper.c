/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:54:26 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 12:04:28 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convierte una letra minúscula en mayúscula
// sino es letra minúscula, devuelve el carácter de entrada

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
