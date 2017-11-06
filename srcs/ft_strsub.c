/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:01:28 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/06 14:01:29 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int 	i;
	
	i = 0;
	if (s != NULL)
	{
		new = (char*)malloc(sizeof(char) * len + 1);
		if (new != NULL)
		{
			while (len)
			{
				new[i] = s[start];
				i++;
				start++;
				len--;
			}
			new[i] = '\0';
			return (new);
		}
	}
	return (0);
}
