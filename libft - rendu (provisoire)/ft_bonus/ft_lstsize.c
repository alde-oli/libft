#include "../libft.h"

int ft_lstsize(t_list *lst)
{
    int lstnb;

    lstnb = 0;
    if (lst)
    {
        while (lst)
        {
            lstnb++;
            lst = lst->next;
        }
        return(lstnb);
    }
    else
        return (0);
}
