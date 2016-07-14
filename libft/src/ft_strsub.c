/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:46:38 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/15 15:46:44 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if ((str = (char *)malloc(sizeof(char) * len + 1)))
	{
		while (s[start] && i < len)
			str[i++] = s[start++];
		return (str);
	}
	str[len] = '\0';
	return (NULL);
}
