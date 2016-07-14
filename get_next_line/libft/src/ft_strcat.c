/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/15 15:39:41 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int		i;
	int		x;

	i = 0;
	x = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[i + x] = src[i];
		i++;
	}
	dst[x + i] = '\0';
	return (dst);
}
