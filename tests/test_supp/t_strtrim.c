#include "../libtest.h"

static void	t_strtrim_u(char const *s, char const *set)
{
	char	*result;

	printf("Source: \"%s\", Set: \"%s\"\n", s, set);

	result = ft_strtrim(s, set);
	printf("ft_strtrim: ");
	if (result)
		printf("\"%s\"\n", result);
	else
		printf("NULL\n");
	free(result);

	printf("\n");
}

void	t_strtrim(void)
{
	printf("\n--------------------\ntesting ft_strtrim:\n");
	t_strtrim_u("   Hello, world!   ", " ");
	t_strtrim_u("\t\t\tTrim\t\t\t", "\t");
	t_strtrim_u("NoTrimHere", "xyz");
	t_strtrim_u("", "");
	t_strtrim_u("  \t\t\t", " ");
	t_strtrim_u("TrailingTabs\t\t", " ");
	t_strtrim_u("+++++++Hello+++++++World+++++++", "+");
	t_strtrim_u("_______Trim_______", "_");
	t_strtrim_u("NoTrimHere", "");
	t_strtrim_u("      Spaces Only      ", "abcdefghijklmnopqrstuvwxyz");
}