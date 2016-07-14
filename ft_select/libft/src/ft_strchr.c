/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/12 09:41:01 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;
	char			*src;

	x = (unsigned char)c;
	src = (char *)s;
	while (*src++)
		if (*src == x)
			return (src);
	return (0);
}
