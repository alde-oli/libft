/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:42:37 by alde-oli          #+#    #+#             */
/*   Updated: 2023/10/09 16:42:40 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	digit;

	if (nb < 0)
	{
		write(fd, "-", 1);
		if (nb == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		nb *= -1;
	}
	digit = nb % 10 + '0';
	nb /= 10;
	if (nb != 0)
		ft_putnbr_fd(nb, fd);
	write(fd, &digit, 1);
}
