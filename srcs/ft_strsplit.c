/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:41:36 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/07 18:41:38 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_super_array(char const *s, char c)
{
	int		i;
	int		x;
	char	**super_array;

	if (s == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i++])
	{
		if ((s[i] == c) && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
			x++;
	}
	i = 0;
	super_array = (char**)malloc(sizeof(char*) * x + 1);
	if (super_array == NULL)
		return (NULL);
	while (super_array[i])
		i++;
	super_array[i] = '\0';
	return (super_array);
}

char	*ft_words(char const *s, char c)
{
	int i;
	char **super_a;

	if (s == NULL)
		return (NULL);
	i = 0;
	super_a = ft_super_array
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int w;
	char *str;
	char *word;
	char **new;

	if (s == NULL)
		return (NULL);
	i = 0;
	w = 0;
	word = 0;
	str = (char*)s;
	while(str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			word[w] = str[i];
		if (str[i] == c && (str[i - 1] >= 65 && str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i - 1] <= 122))
		{
			new = (char*)malloc(sizeof(char) * i + 1);
			new = word;
			word = 0;
		}

		i++;
	}
}