/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:15:28 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:27:58 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int neg;
	int res;

	neg = 1;
	res = 0;
	while (*nptr && (*nptr == ' ' || *nptr == '\a' || *nptr == '\b' ||
			*nptr == '\t' || *nptr == '\n' || *nptr == '\v' ||
			*nptr == '\f' || *nptr == '\r'))
		++nptr;
	if (*nptr == '-')
		neg = neg * -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - 48);
		++nptr;
	}
	return (res * neg);
}
