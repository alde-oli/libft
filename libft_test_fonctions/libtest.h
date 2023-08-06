#ifndef LIBTEST_H
# define LIBTEST_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include "../libft_rendu_pdf2022/libft.h"

//fonctions libc
void    t_isalpha(void);
void    t_isdigit(void);
void    t_isalnum(void);
void    t_isascii(void);
void    t_isprint(void);
void	t_strlen(void);
void    t_memset(void);
void    t_bzero(void);
void    t_memcpy(void);
void    t_memmove(void);
void	t_strlcpy(void);
void    t_strlcat(void);
void    t_toupper(void);
void    t_tolower(void);
void    t_strchr(void);
void    t_strrchr(void);
void	t_strncmp(void);
void    t_memchr(void);
void    t_memcmp(void);
void    t_strnstr(void);
void	t_atoi(void);
//fonctions supp
void    t_substr(void);
void    t_strjoin(void);
void    t_strtrim(void);
void	t_split(void);
void    t_itoa(void);
void    t_strmapi(void);
void    t_striteri(void);
void    t_putchar_fd(void);
void	t_putstr_fd(void);
void    t_putendl_fd(void);
void	t_putnbr_fd(void);
//fonctions bonus
void    t_lstnew(void);
void    t_lstadd_front(void);
void    t_lstsize(void);
void    t_lstlast(void);
void    t_lstadd_back(void);
void    t_lstdelone(void);
void    t_lstclear(void);
void    t_lstiter(void);
void    t_lstmap(void);

#endif