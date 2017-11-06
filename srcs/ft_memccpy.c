/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:31:18 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/26 18:31:19 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *out, const void *in, int c, size_t n)
{
	unsigned const char	*src;
	unsigned char		*dest;

	src = (unsigned char*)in;
	dest = (unsigned char*)out;
	while (n)
	{
		*dest = *src;
		if (*src == (unsigned char)c)
			return (dest + 1);
		dest++;
		src++;
		n--;
	}
	return (NULL);
}
