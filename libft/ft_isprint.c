/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:14:44 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/20 10:22:41 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Comprueba si un caracter es imprimible incluido el espacio
// caracteres entre 32 y 126

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
