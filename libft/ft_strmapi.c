/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:41:26 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 09:04:36 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   s = cadena de caracteres sobre la que hay iterar
   f = función que hay que aplicar a cada carácter.
   Retorno: La cadena que resulte de las aplicaciones sucesivas de ’f’ 
            Si falla la asignación => devuelve NULL.
   Aplica la función ’f’ a cada carácter de la de cadena de caracteres ’s’ 
   para crear una nueva cadena de caracteres con malloc que resulte de 
   las aplicaciones sucesivas de ’f’
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*p;

	if (s == 0)
		return (0);
	p = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (p == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
