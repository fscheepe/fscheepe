/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/12 09:47:13 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	ndlesze;
	unsigned int	i;
	unsigned int	x;

	ndlesze = ft_strlen(needle);
	i = 0;
	x = 0;
	if (ndlesze == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[x] == haystack[i + x])
		{
			if (x == ndlesze - 1)
				return ((char *)haystack + i);
			x++;
		}
		x = 0;
		i++;
	}
	return (0);
}
