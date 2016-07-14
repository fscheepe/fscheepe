/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:36:21 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/12 09:36:35 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;

	if (*small == '\0')
		return ((char*)big);
	i = 0;
	while (*big && n)
	{
		if (*big == small[i])
			i++;
		else
			i = 0;
		if (small[i] == '\0')
			return ((char*)(big - i + 1));
		big++;
		n--;
	}
	return (NULL);
}
