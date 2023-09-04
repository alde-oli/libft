#include "../libtest.h"

void    t_lstlast_u(t_list *lst)
{
    t_list  *temp = lst;

    printf("list:\n");
    while(temp)
    {
        printf("element adress: %p, content: %s, next: %p\n", temp, temp->content, temp->next);
        temp = temp->next; 
    }
    t_list *last = ft_lstlast(lst);
    printf("   last adress: %p, content: %s, next: %p\n\n", last, last->content, last->next);
}

void    t_lstlast(void)
{
    printf("\n--------------------\ntesting ft_lstlast:\n");

    t_list *lst1 = ft_lstnew("I'm the last one");
    t_list *lst2 = ft_lstnew("8");
    t_list *lst3 = ft_lstnew("7");
    t_list *lst4 = ft_lstnew("6");
    t_list *lst5 = ft_lstnew("5");
    t_list *lst6 = ft_lstnew("4");
    t_list *lst7 = ft_lstnew("3");
    t_list *lst8 = ft_lstnew("2");
    t_list *lst9 = ft_lstnew("1");

    lst9->next = lst8;
    lst8->next = lst7;
    lst7->next = lst6;
    lst6->next = lst5;
    lst5->next = lst4;
    lst4->next = lst3;
    lst3->next = lst2;
    lst2->next = lst1;
    lst1->next = NULL;

    t_lstlast_u(lst5);
    t_lstlast_u(NULL);
    t_lstlast_u(lst1);
    t_lstlast_u(lst9);

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