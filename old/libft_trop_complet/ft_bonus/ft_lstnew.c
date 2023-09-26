#include "../libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *lst;

    lst = (t_list *) malloc(sizeof(t_list));
    if (!lst)
        return (NULL);
    lst->next = NULL;
    if (content)
    {
		lst->content = ft_memalloc(content_size);
		if (!(lst->content))
		{
			free(lst);
			return (NULL);
		}
		ft_memcpy(lst->content, content, lst->content_size = content_size);
    }
    else
    {
        lst->content = NULL;
        lst->content_size = 0;
    }
    return (lst);
}