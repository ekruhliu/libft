/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 12:08:50 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/27 12:08:51 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *src, int c, size_t len)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = src;
	while (i < len)
	{
		if (*s == (unsigned char)c)
			return ((unsigned char*)s);
		i++;
		s++;
	}
	return (NULL);
}
