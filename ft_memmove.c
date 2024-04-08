/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:23:28 by alde-oli          #+#    #+#             */
/*   Updated: 2023/10/10 14:43:28 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!(dest && src))
		return (NULL);
	if (dest >= src && dest < src + len)
		while (len > 0)
			((char *)dest)[len - 1] = ((char *)src)[len--];
	else
		while (i < len)
			((char *)dest)[i] = ((char *)src)[i++];
	return (dest);
}
