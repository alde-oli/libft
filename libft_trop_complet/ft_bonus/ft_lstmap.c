#include "../libft.h"

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
        newlst->content = ft_memalloc(lst->content_size);
        if (!newlst->content)
            return (NULL);
        ft_memcpy(newlst->content, lst->content, lst->content_size);
        f(newlst->content);
        newlst->content_size = lst->content_size;
        lst = lst->next;
        newlst = newlst->next;
    }
    return (newlstreturn);
}