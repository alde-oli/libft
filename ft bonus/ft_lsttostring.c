#include "../libft.h"

void    ft_lsttostring(t_list *lst)
{
    char    *dest;
    char    *temp;

    if(!lst)
    {
        ft_putstr("invalid argument");
        return;
    }
    if(lst->content)
        dest = ft_strjoin("(interpreted as int)content value is: ", ft_itoa(*(int *)(lst->content)));
    else
        dest = ft_strjoin("", "There is no content");
    if(lst->content_size)
        temp = ft_strjoin(", (interpreted as int)content size is: ", ft_itoa((int)(lst->content_size)));
    else
        temp = ft_strjoin("", ", there is no content size");
    dest = ft_strjoin(dest, temp);
    ft_memdel((void **)&temp);
    if(lst->next)
        temp = ft_strjoin("", ", there is a next element to the list.");
    else
        temp = ft_strjoin("", ", there is no next element to the list.");
    dest = ft_strjoin(dest, temp);
    ft_memdel((void **)&temp);
    ft_putstr(dest);
    free(dest);ft_memdel((void **)&dest);
}