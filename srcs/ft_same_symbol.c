/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_same_symbol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:08:29 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/14 17:08:30 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_same_symbol(char *s, char l)
{
	int	i;
	int symbol;

	i = 0;
	symbol = 0;
	while (s[i])
	{
		if (s[i] == l)
			symbol++;
		i++;
	}
	return (symbol);
}
