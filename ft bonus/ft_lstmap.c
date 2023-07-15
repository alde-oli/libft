#include "../libft.h"

int ft_lstnbr(t_list *lst)
{
    int lstnb;

    lstnb = 0;
    while (lst)
    {
        lstnb++;
        lst = lst->next;
    }
    return(lstnb);
}

t_list *ft_lstcreate(int lstnb)
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
            ft_lstdel(newlst, ft_memdel);
            return(NULL);
        }
        ft_lstadd(lsttemp, newlst);
        lstnb--;
    }
    return(newlst);
}

t_list  *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    int     lstnb;
    t_list  *newlst;
    t_list  *newlstreturn;

    lstnb = ft_lstnbr(lst);
    newlst = ft_lstcreate(lstnb);
    newlstreturn = newlst;
    while(lst)
    {
        ft_memdel(newlst->content);
        newlst->content = ft_memalloc(lst->content_size);
        if (!newlst->content)
            return (NULL);
        ft_memcpy(newlst->content, f(lst->content), lst->content_size);
        newlst->content_size = lst->content_size;
        lst = lst->next;
        newlst = newlst->next;
    }
    return (newlstreturn);
}