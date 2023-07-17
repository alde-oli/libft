#include "../libft.h"

static int	ft_strnbr(char const *s, char c)
{
	int	s_nbr;
	int	i;

	s_nbr = 0;
	i = 0;
	if (s[i] != c)
		s_nbr++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			s_nbr++;
		i++;
	}
	return (s_nbr);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int	    s_nbr;
	int	    i;
	int	    j;

	i = 0;
	j = 0;
	dest = (char **)malloc(sizeof(char *) * (s_nbr = ft_strnbr(s, c)));
	if (!dest)
		return (NULL);
	while (j < s_nbr)
	{
		while (s[i] && s[i] == c)
			i++;
        if (!s[i])
            break;
		dest[j] = ft_strcdup(s, &i, c);
		if (!dest[j])
			return (NULL);
		j++;
	}
	dest[j] = NULL;
	return (dest);
}