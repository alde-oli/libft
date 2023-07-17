#include "../libft.h"

char	*ft_strcdup(char const *src, int *i, char c)
{
	int	    j;
	char	*dest;

	j = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strclen(src, *i, c) + 1));
	if (!dest)
		return (NULL);
	while (src[*i] && src[*i] != c)
	{
		dest[j] = src[*i];
		j++;
		(*i)++;
	}
	dest[j] = '\0';
	return (dest);
}