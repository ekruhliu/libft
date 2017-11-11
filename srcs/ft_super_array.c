/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_super_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:22:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/10 19:22:36 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_super_array(char const *s, char c)
{
	int				i;
	int				words;
	char			**super_array;

	if (s == NULL)
		return (NULL);
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[0] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			words++;
		i++;
	}
	super_array = (char **)malloc(sizeof(char*) * words + 1);
	if (super_array == NULL)
		return (NULL);
	return (super_array);
}
