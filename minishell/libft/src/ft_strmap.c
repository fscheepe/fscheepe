/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:29:55 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/13 11:24:23 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (s != NULL && f != NULL)
		while (*s)
			*str = f(*s++);
	return (str);
}
