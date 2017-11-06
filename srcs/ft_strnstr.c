/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 17:55:04 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/30 17:55:08 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*x;

	x = ft_strstr(big, little);
	if ((x - big) + ft_strlen(little) > len)
		return (NULL);
	return (x);
}
