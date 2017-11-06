/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:38:08 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/04 14:38:09 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;
	int len;

	i = 0;
	if (s != NULL)
	{
		len = ft_strlen(s);
		str = (char*)malloc(sizeof(char) * len + 1);
		if (str != NULL)
		{
			while (len)
			{
				str[i] = (*f)(i, s[i]);
				i++;
				len--;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
