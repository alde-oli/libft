#include "../libtest.h"

static void t_strlen_u(const char *str)
{
    printf("test : %s\nft_strlen : %d\n   strlen : %d\n\n", str, ft_strlen((char *)str), strlen(str));
}

void    t_strlen(void)
{
    printf("\n--------------------\ntesting ft_strlen:\n");
    t_strlen_u("");
    t_strlen_u("skididi papa");
    t_strlen_u("a\nb\nc");
    t_strlen_u("\roui\tgyuyt1123456789");
    t_strlen_u("ghghghh");
    t_strlen_u("ahgufielsndifhesidyrgbsosifdgrosuidfgkytkzuyrtzkryftzkryhrtyejyhtbgfirseuyrtfhikedurygretjdgyekiuurtygjdkryutghefkrutygefkurtyègfebkhrutygehtiurtgnkdertyugzkerygtvcjeurytgbcjdhrytgcbkeurytgcbejzrtfzvxjeuyrtgxfcjerfzx");
}