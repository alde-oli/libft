#include "../libtest.h"

static void ft_numbertoletter(void *c)
{
    char *str = (char *)c; // Convertir le pointeur en un pointeur de char

    for (int i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
        {
            str[i] += ('a' - '0');
        }
    }
}

static void ft_strzgzgzgh(void *c)
{
    char *str = (char *)c; // Convertir le pointeur en un pointeur de char

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '-')
            str[i] = '=';
        else if (str[i] == '(' || str[i] == ')')
            str[i] = '#';
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = '\t';
    }
}

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

void    t_lstiter_u(t_list *lst, void (*f)(void *))
{
    t_list  *temp = lst;

    printf("list before:\n");
    ft_printlst(temp);

    printf("\nlist after:\n");
    ft_lstiter(lst, f);
    temp = lst;
    ft_printlst(temp);
    printf("\n\n");
}

void t_lstiter(void)
{
    printf("\n--------------------\ntesting ft_lstiter:\n");

    t_list *lst1 = ft_lstnew(strdup("(--1--)"));
    t_list *lst2 = ft_lstnew(strdup("(--2--)"));
    t_list *lst3 = ft_lstnew(strdup("(--3--)"));
    t_list *lst4 = ft_lstnew(strdup("(--4--)"));
    t_list *lst5 = ft_lstnew(strdup("(--5--)"));
    t_list *lst6 = ft_lstnew(strdup("(--6--)"));
    t_list *lst7 = ft_lstnew(strdup("(--7--)"));
    t_list *lst8 = ft_lstnew(strdup("(--8--)"));
    t_list *lst9 = ft_lstnew(strdup("(--9--)"));

    lst1->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;
    lst5->next = lst6;
    lst6->next = lst7;
    lst7->next = lst8;
    lst8->next = lst9;
    lst9->next = NULL;

    t_lstiter_u(NULL, NULL);
    t_lstiter_u(NULL, &ft_numbertoletter);
    t_lstiter_u(lst4, &ft_numbertoletter);
    t_lstiter_u(lst1, NULL);
    t_lstiter_u(lst1, &ft_strzgzgzgh);

    // Libérer la mémoire
    ft_lstclear(&lst1, free);
}