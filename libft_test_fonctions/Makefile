LIBFT_FILE = ../libft_rendu_pdf2022/libft.a
LIBC_TEST_FILES = ./main_files//main_libc.c \
											./test_libc/t_isalpha.c \
											./test_libc/t_isdigit.c \
											./test_libc/t_isalnum.c \
											./test_libc/t_bzero.c \
											./test_libc/t_memset.c \
											./test_libc/t_memmove.c \
											./test_libc/t_isprint.c \
											./test_libc/t_isascii.c \
											./test_libc/t_strlen.c \
											./test_libc/t_memcpy.c \
											./test_libc/t_strlcpy.c \
											./test_libc/t_strlcat.c \
											./test_libc/t_toupper.c \
											./test_libc/t_tolower.c \
											./test_libc/t_strchr.c \
											./test_libc/t_strrchr.c \
											./test_libc/t_strncmp.c \
											./test_libc/t_memchr.c \
											./test_libc/t_memcmp.c \
											./test_libc/t_strnstr.c \
											./test_libc/t_atoi.c \
											./test_libc/t_calloc.c \
											./test_libc/t_strdup.c

SUPP_TEST_FILES = ./main_files/main_supp.c \
											./test_supp/t_substr.c \
											./test_supp/t_strjoin.c \
											./test_supp/t_strtrim.c \
											./test_supp/t_split.c \
											./test_supp/t_itoa.c \
											./test_supp/t_strmapi.c \
											./test_supp/t_striteri.c \
											./test_supp/t_putchar_fd.c \
											./test_supp/t_putstr_fd.c \
											./test_supp/t_putendl_fd.c \
											./test_supp/t_putnbr_fd.c

BONUS_TEST_FILES = ./main_files/main_bonus.c \
											./test_bonus/t_lst_new.c \
											./test_bonus/t_lst_add_front.C \
											./test_bonus/t_lstsizer.C \
											./test_bonus/t_lstlast.c \
											./test_bonus/t_lstadd_back.c \
											./test_bonus/t_lstdelone.c \
											./test_bonus/t_lstclear.c \
											./test_bonus/t_lstiter.c \
											./test_bonus/t_lstmap.c

libc: $(LIBC_TEST_FILES)
	gcc -o ltest $(LIBC_TEST_FILES) $(LIBFT_FILE) && exe_ltest

supp: $(SUPP_TEST_FILES)
	gcc -o stest $(SUPP_TEST_FILES) $(LIBFT_FILE) && exe_stest

bonus: $(BONUS_TEST_FILES)
	gcc -o btest $(BONUS_TEST_FILES) $(LIBFT_FILE) && exe_btest

.PHONY: clean

clean:
	rm -f exe_ltest exe_stest exe_btest