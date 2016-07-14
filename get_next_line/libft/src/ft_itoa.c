/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:26:35 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/15 15:28:12 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_getlen(int x)
{
	int		len;

	if (x == 0)
		return (1);
	len = 0;
	while (x != 0)
	{
		len++;
		x = x / 10;
	}
	return (len);
}

static int	ft_isneg(int x)
{
	if (x < 0)
	{
		return (1);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	int		isneg;
	char	*str;
	int		len;

	isneg = ft_isneg(n);
	len = ft_getlen(n) + isneg;
	str = (char *)malloc(sizeof(char) * len);
	if (ft_isneg(n))
	{
		n = n * -1;
		str[0] = '-';
	}
	while (len-- > isneg)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
