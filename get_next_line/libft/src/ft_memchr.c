/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/12 09:34:04 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	x;
	unsigned int	i;

	src = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (src[i] == x)
			return (src + i);
		i++;
	}
	return (0);
}
