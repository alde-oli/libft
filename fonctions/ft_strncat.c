#include "libft.h"

void	ft_strncpymod(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = ft_strlen(dest);
    ft_strncpymod(dest + i, src, nb);
	return (dest);
}