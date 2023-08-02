#include "../libft.h"

t_list *ft_lstcreate(int lstnb, void (*del)(void *))
{
    t_list  *newlst;
    t_list  *lsttemp;

    if (lstnb < 1)
        return (NULL);
    newlst = ft_lstnew(NULL);
    while (lstnb)
    {
        lsttemp = newlst;
        newlst = ft_lstnew(NULL);
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

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    int     lstnb;
    t_list  *newlst;
    t_list  *newlstreturn;

    lstnb = ft_lstsize(lst);
    newlst = ft_lstcreate(lstnb, del);
    newlstreturn = newlst;
    while(lst)
    {
        del(newlst->content);
        f(newlst->content = lst->content);
        lst = lst->next;
        newlst = newlst->next;
    }
    return (newlstreturn);
}