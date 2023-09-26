#include "../libft.h"

t_list *ft_lstcreate(int lstnb, void (*del)(void *))
{
    t_list  *newlst;
    t_list  *lsttemp;

    if (lstnb < 1)
        return (NULL);
    newlst = ft_lstnew(NULL, 0);
    while (lstnb)
    {
        lsttemp = newlst;
        newlst = ft_lstnew(NULL, 0);
        if (!newlst)
        {
            ft_lstclear(newlst, del);
            return(NULL);
        }
        ft_lstadd(lsttemp, newlst);
        lstnb--;
    }
    return(newlst);
}