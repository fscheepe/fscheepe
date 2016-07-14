/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:47:06 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/15 15:47:13 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	x;
	size_t	y;
	size_t	z;

	if (!s)
		return (NULL);
	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	y = 0;
	z = 0;
	while (s[z])
	{
		if (s[z] != ' ' && s[z] != '\n' && s[z] != '\t')
		{
			z++;
			y = z;
		}
		else
			z++;
	}
	if (y == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, x, y - x));
}
