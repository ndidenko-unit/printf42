/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:06:34 by ndidenko          #+#    #+#             */
/*   Updated: 2017/11/30 15:44:48 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i1] != '\0')
	{
		dest[i2] = src[i1];
		i1++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest);
}
