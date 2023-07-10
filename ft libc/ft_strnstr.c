#include "libft.h"

int	ft_strcmpmod(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char *ft_strnstr(char *h, char *n, size_t len)
{
    int i;
    i = 0;
    while (h[i] != 0 && i < len)
    {
        if (ft_strcmpmod(h + i, len) == 0)
            return (h + i);
        i++;
    }
    return (NULL);
}