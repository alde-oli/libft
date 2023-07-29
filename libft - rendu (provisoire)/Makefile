NAME = libft.a

CC = gcc
CFlags = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

FILES_LIBC =

FILES_SUPP = 

FILES_BONUS = 

LIBC_DIR = $(addprefix ./ft_libc/, $(addsuffix .c, $(FILES_LIBC)))
SUPP_DIR = $(addprefix ./ft_supp/, $(addsuffix .c, $(FILES_SUPP)))
BONUS_DIR = $(addprefix ./ft_bonus/, $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR = ./
OBJS_LIBC = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_LIBC)))
OBJS_SUPP = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_SUPP)))
OBJS_BONUS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))