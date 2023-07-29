#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new && *lst && lst)
    {
        new->next = *lst;
        *lst = new;
    }
    else
        return (NULL);
}