/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:17:27 by fscheepe          #+#    #+#             */
/*   Updated: 2016/05/14 14:35:07 by fscheepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 || *s2) && (s1++ && s2++))
		if (*s1 != *s2)
			return (*s1 - *s2);
	return (0);
}