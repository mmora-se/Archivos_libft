/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:01:48 by mmora-se          #+#    #+#             */
/*   Updated: 2021/04/21 11:54:37 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Convierte la porción inicial de la cadena str a int representación
  str puede empezar con un número arbitrario de espacios y símbolos
  ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` '' que habrá que saltar
  A continuación, str puede ir seguida de un número arbitrario de signos + y -
  El signo - hará cambiar el signo del entero devuelto en función del número 
  de signos - y si este es par o impar
  Para terminar, str tendrá que estar compuesta por dígitos en base 10
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (num * sign > INT_MAX)
			return (-1);
		if (num * sign < INT_MIN)
			return (0);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
