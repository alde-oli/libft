#include "../libft.h"

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    if (new && *alst && alst)
    {
        new->next = *alst;
        *alst = new;
    }
    else
        return (NULL);
}