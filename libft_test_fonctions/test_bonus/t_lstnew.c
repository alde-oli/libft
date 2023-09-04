#include "../libtest.h"

static void t_lstnew_u(void *content) {
    t_list *result = ft_lstnew(content);

    printf("Content: ");
    if (content)
        printf("%s\n", (char *)content);
    else
        printf("(null)\n");
    printf("Result: %p\n", result);
    if(result)
    {
        printf("Element address: %p, Content: ", result);
        if (!result || !result->content)
            printf("(null), Next: ");
        else
            printf("%s, Next: ", (char *)result->content);
        if (!result || !result->next)
            printf("(null)\n");
        else
            printf("%p\n", result->next); 
    }
    else
        printf("(null)\n");
    printf("\n");
}


void t_lstnew(void) {
    printf("\n--------------------\ntesting ft_lstnew:\n");

    t_lstnew_u(NULL);
    int num = 42;
    t_lstnew_u(&num); 
    char str[] = "Hello, world!";
    t_lstnew_u(str);
    char empty_str[] = "";
    t_lstnew_u(empty_str);

    struct example {
        int value;
    };

    struct example example_data = {100};
    t_lstnew_u(&example_data);
    t_lstnew_u(NULL);
    int array[] = {1, 2, 3};
    t_lstnew_u(array);
    t_lstnew_u("Another string");
    t_list *list = ft_lstnew(str);
    list->next = ft_lstnew(&num);
    t_lstnew_u(list);
}