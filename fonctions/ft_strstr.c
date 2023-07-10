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

char *ft_strstr(char *h, char *n)
{
    int i;
    i = 0;
    while (h[i] != 0)
    {
        if (ft_strcmpmod(h + i, n) == 0)
            return (h + i);
        i++;
    }
    return (NULL);
}