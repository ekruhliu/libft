/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:04:50 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/04 14:04:51 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (s != NULL)
	{
		len = ft_strlen(s);
		str = (char*)malloc(sizeof(char) * len + 1);
		if (str != NULL)
		{
			while (len)
			{
				str[i] = (*f)(s[i]);
				i++;
				len--;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
