/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:18 by alde-oli          #+#    #+#             */
/*   Updated: 2023/10/10 14:42:36 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	len;

	len = (n < 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	i;

	i = ft_nbrlen(n);
	dest = ft_calloc((i + 1), sizeof(char));
	if (!dest)
		return (NULL);
	dest[i] = 0;
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest[i - 1] = '0';
	while (n)
	{
		dest[--i] = (n % 10) * (1 - 2 * (n < 0)) + '0';
		n /= 10;
	}
	return (dest);
}
