/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:09:44 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/19 13:23:38 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función isalpha recibe un valor ascii
// devuelve 0 (falso) si el carácter asociado No es una letra
// devuelve 1 (verdadero) si el carácter asociado es letra mayúscula ó minúscula

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
