/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:41:57 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/30 10:41:58 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
