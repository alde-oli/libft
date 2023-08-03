#include "../libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *))
{
    if (*alst && alst)
    {
        if(del && (*alst)->content)
            del((*alst)->content);
        free(*alst);
        *alst = NULL;
    }
}