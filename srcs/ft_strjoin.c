/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:22:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/06 16:22:36 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int o;

	i = 0;
	o = 0;
	while (dst[i] != '\0')
		i++;
	while (src[o] != '\0')
	{
		dst[i] = src[o];
		o++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*str;
	size_t	len;
	int 	i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		str = ft_strcat((char*)s1, s2);
		len = ft_strlen(str);
		new = (char*)malloc(sizeof(char) * len + 1);
		if (new != NULL)
		{
			while (len)
			{
				new[i] = str[i];
				i++;
				len--;
			}
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}

int	main(void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";

	printf("%s\n", ft_strjoin(ft_strjoin(s1, s2), s3));
	return(0);
}