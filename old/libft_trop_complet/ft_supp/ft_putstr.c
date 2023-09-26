#include "../libft.h"

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar((char)str[i]);
		i++;
	}
}