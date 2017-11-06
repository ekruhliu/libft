/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:56:37 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/30 13:56:38 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	char	*b;
	char	*l;

	if (*big == '\0' && *little == '\0')
		return ((char*)big);
	while (*big)
	{
		b = (char*)big;
		l = (char*)little;
		while ((*big) && (*l) && (*big == *l))
		{
			big++;
			l++;
		}
		if (*l == '\0')
			return (b);
		big = b + 1;
	}
	return (NULL);
}
