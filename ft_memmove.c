/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:17:55 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/06 15:45:13 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		c;
	char		*dest2;
	const char	*src2;

	c = 0;
	dest2 = dest;
	src2 = src;
	if (!dest && !src)
		return (NULL);
	if (dest2 > src2)
	{
		c = n;
		while (c > 0)
		{
			dest2[c - 1] = src2[c - 1];
			c--;
		}
	}
	else
		while (c < n)
		{
			dest2[c] = src2[c];
			c++;
		}
	return (dest);
}
