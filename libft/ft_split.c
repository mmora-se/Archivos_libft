/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:48:07 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/01 16:57:23 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	s = La cadena de caracteres que hay que trocear.
	c = El carácter delimitador.
	Retorna La tabla p con las nuevas cadenas que resulten del troceado. 
	        NULL si falla la reserva de memoria
	Reserva memoria con malloc y devuelve una tabla de cadenas de caracteres 
	obtenida separando s con el carácter c, que se utiliza como delimitador
	La tabla debe terminar con NULL
	función num_w = cont_w = número de words(s, c)
	i : 0 -> num_w
	p[i] = cada palabra
	p[num_w + 1] = NULL
   --- char	*ft_substr(char const *s, unsigned int start, size_t len):
   devuelve la cadena comienza en el índice start y 
   tiene como tamaño máximo longitud de s  ó (start + len)
*/
#include "libft.h"

int	ft_cont_w(char const *s1, char c1)
{
	int	x;
	int	k;

	if (ft_strlen(s1) == 0)
		return (0);
	x = 0;
	k = 1;
	while (s1[k] != '\0')
	{
		if ((s1[k] == c1) && (s1[k - 1] != c1))
			x++;
		k++;
	}
	if (s1[k - 1] != c1)
		x = x + 1;
	return (x);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**p;
	char		*pini;

	if (s == 0)
		return (0);
	p = (char **) malloc((ft_cont_w(s, c) + 1) * sizeof(char *));
	if (p == 0)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			pini = (char *)s;
			while ((*s != c) && (*s != '\0'))
				s++;
			p[i] = ft_substr(pini, 0, (s - pini));
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}
