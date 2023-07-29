#include "libft.h"

void    ft_lstclear(t_list **alst, void (*del)(void *))
{
    t_list *next;

    if (*alst && alst && del)
    {
        while(*alst)
        {
            next = (*alst)->next;
            ft_lstdelone(alst, del);
            *alst = next;
        }
    }
}