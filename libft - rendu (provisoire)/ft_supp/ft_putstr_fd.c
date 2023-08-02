#include "../libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar_fd((char)str[i], fd);
		i++;
	}
}