#include "../libtest.h"

static void ft_printlst(t_list *lst)
{
    if(lst)
    {
        while(lst)
        {
            printf("Element address: %p, Content: ", lst);
            if (!lst || !lst->content)
                printf("(null), Next: ");
            else
                printf("%s, Next: ", (char *)lst->content);
            if (!lst || !lst->next)
                printf("(null)\n");
            else
                printf("%p\n", lst->next);
            lst = lst->next; 
        }
    }
    else
        printf("(null)\n");
}

void    t_lstadd_back_u(t_list *lst, t_list *new)
{
    t_list  *temp = lst;

    printf("list before:\n");
    ft_printlst(temp);

    printf("\nElement to add in back:\n");
    if(new)
    {
        printf("Element address: %p, Content: ", new);
        if (!new || !new->content)
            printf("(null), Next: ");
        else
            printf("%s, Next: ", (char *)new->content);
        if (!new || !new->next)
            printf("(null)\n");
        else
            printf("%p\n", new->next);
    }
    else
        printf("(null)\n");

    printf("\nlist after:\n");
    ft_lstadd_back(&lst, new);
    temp = lst;
    ft_printlst(temp);
    printf("\n\n");
}

void    t_lstadd_back(void)
{
    printf("\n--------------------\ntesting ft_lstadd_back:\n");

    t_list *lst1 = ft_lstnew("(--1--)");
    t_list *lst2 = ft_lstnew("(--2--)");
    t_list *lst3 = ft_lstnew("(--3--)");
    t_list *lst4 = ft_lstnew("(--4--)");
    t_list *lst5 = ft_lstnew("(--5--)");
    t_list *lst6 = ft_lstnew("(--6--)");
    t_list *lst7 = ft_lstnew("(--7--)");
    t_list *lst8 = ft_lstnew("(--8--)");
    t_list *lst9 = ft_lstnew("(--9--)");

    t_lstadd_back_u(NULL, NULL);
    t_lstadd_back_u(NULL, lst1);
    t_lstadd_back_u(lst1, lst2);
    t_lstadd_back_u(lst1, lst3);
    t_lstadd_back_u(lst1, lst4);
    t_lstadd_back_u(lst1, lst5);
    t_lstadd_back_u(lst3, lst6);
    t_lstadd_back_u(lst1, NULL);
    t_lstadd_back_u(lst1, lst7);
    t_lstadd_back_u(lst8, lst9);
    t_lstadd_back_u(lst1, lst8);

    free(lst1);
    free(lst2);
    free(lst3);
    free(lst4);
    free(lst5);
    free(lst6);
    free(lst7);
    free(lst8);
    free(lst9);
}