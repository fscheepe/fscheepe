/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:53:50 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/10 15:54:07 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c,
		size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	unsigned char	x;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	x = (unsigned char)c;
	while (n--)
		if ((*dst++ = *src++) == x)
			return (dst);
	return (NULL);
}
