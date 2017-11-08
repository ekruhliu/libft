/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:21:21 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/31 13:21:22 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*mem;
	int		i;

	if (size != 0)
	{
		i = 0;
		mem = (char*)malloc(sizeof(char) * size);
		if (mem != NULL)
		{
			while (size != 0)
			{
				mem[i] = 0;
				i++;
				size--;
			}
			return (mem);
		}
	}
	return (0);
}
