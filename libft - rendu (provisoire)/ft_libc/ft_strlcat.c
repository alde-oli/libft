#include "../libft.h"

static void	ft_strncpymod(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;

	j = 0;
	while (src[j] && j < nb)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
}

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t dest_len;
    size_t src_len;
    int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen((char *)src);
    if (dest_len >= n)
        return (src_len + n);
	  i = ft_strlen((dest + dest_len));
    ft_strncpymod(dest + i, (char *)src, n - dest_len - 1);
    dest[n - 1] = '\0';
    return (dest_len + src_len);
}
