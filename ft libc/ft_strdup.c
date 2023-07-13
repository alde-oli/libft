#include "../libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(dest, src));
}