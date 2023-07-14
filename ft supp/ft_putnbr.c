#include "../libft.h"

#include <unistd.h>

void	writenbr(int nb)
{
	char	digit;

	if (nb < 0)
		digit = -1 * (nb % 10) + 48;
	else
		digit = nb % 10 + 48;
	nb /= 10;
	if (nb != 0)
		writenbr(nb);
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	writenbr(nb);
}