/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:08:53 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/29 13:54:19 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Reserva memoria (con malloc(3)) y devuelve la
	cadena de caracteres que representa el integer
	pasado como argumento. Se deben gestionar los números negativos.
	Primero calculamos el número de cifras del int n
	usamos un long int para trabajar
	Si es negativo, añadimos una posición para el signo
	Y al usar Calloc reservamos len+1 posiciones inicializadas a '\0'
*/
#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0 || n < 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	n_long;
	char		*p;

	len = ft_intlen(n);
	n_long = n;
	if (n_long < 0)
	{
		len++;
		n_long = -n_long;
	}
	p = (char *)ft_calloc(len + 1, 1);
	if (p == 0)
		return (0);
	while (len > 0)
	{
		p[len - 1] = (n_long % 10) + '0';
		n_long = n_long / 10;
		len--;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
