#include "../libtest.h"

static void t_lstadd_front_u(t_list **lst, t_list *new)
{
    printf("First element before lstadd_front: Address: %p, Content: ", *lst);
    if (!*lst)
        printf("(null), Next: ");
    else
        printf("%s, Next: ", (char *)(*lst)->content);
    if (!*lst || !(*lst)->next)
        printf("(null)\n");
    else
        printf("%p\n", (*lst)->next);

    printf("          Element to add in front: Address: %p, Content: ", new);
    if (!new || !new->content)
        printf("(null), Next: ");
    else
        printf("%s, Next: ", (char *)new->content);
    if (!new || !new->next)
        printf("(null)\n");
    else
        printf("%p\n", new->next);

    ft_lstadd_front(lst, new);

    printf(" First element after lstadd_front: Address: %p, Content: ", *lst);
    if (!lst || !(*lst)->content)
        printf("(null), Next: ");
    else
        printf("%s, Next: ", (char *)(*lst)->content);
    if (!lst || !(*lst)->next)
        printf("(null)\n");
    else
        printf("%p\n", (*lst)->next);
    printf("\n");
}

void t_lstadd_front(void)
{
    printf("\n--------------------\ntesting ft_lstadd_front:\n");

    t_list *lst = NULL;

    // Adding elements to an initially NULL list
    t_list *new1 = ft_lstnew("Hello");
    t_list *new2 = ft_lstnew(NULL);
    t_list *new3 = ft_lstnew("zdougidoupaloulouda");
    t_lstadd_front_u(&lst, new1);
    t_lstadd_front_u(&lst, NULL);
    t_lstadd_front_u(&lst, new2);
    t_lstadd_front_u(&lst, new3);
    if(lst)
        free(lst);
    if(new1)
        free(new1);
    if(new2)
        free(new2);
    if(new3)
        free(new3);
} 