/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:13:38 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/13 13:53:16 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	if (n == 0 || s1 == s2)
		return (dst);
	while (n--)
		*dst++ = *src++;
	return (dst);
}
