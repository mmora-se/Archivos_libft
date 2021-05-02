/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:53:58 by mmora-se          #+#    #+#             */
/*   Updated: 2021/05/02 14:15:01 by mmora-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This program calls the function ft_split
*/
#include "libft.h"

int	main(void)
{
	t_list	*l;

	l = ft_lstnew("Hola");
	while (l)
	{
		printf("cadena = %s\n", (char *)l->content);
		l = l->next;
	}
	return (0);
}
