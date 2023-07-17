#include "../libft.h"

void    ft_putlst(t_list *lst)
{
    if(!lst)
    {
        ft_putstr("invalid argument\n");
        return;
    }
    if(lst->content)
    {
        ft_putstr("(interpreted as int)content value is: ");
        ft_putnbr(*(int *)(lst->content));
    }
    else
        ft_putstr("There is no content");
    if(lst->content_size)
    {
        ft_putstr(", (interpreted as int)content size is: ");
        ft_putnbr((int)(lst->content_size));
    }
    else
        ft_putstr(", there is no content size");
    if(lst->next)
        ft_putstr(", there is a next element to the list.\n");
    else
        ft_putstr(", there is no next element to the list.\n");
}