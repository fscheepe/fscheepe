/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/12 10:41:47 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;
	int		x;

	i = 0;
	while (s[i] != '\0')
		i++;
	dst = (char *)malloc(i + 1);
	x = 0;
	while (x < i)
	{
		dst[x] = s[x];
		x++;
	}
	return (dst);
}
