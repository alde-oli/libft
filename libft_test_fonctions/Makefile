LIBFT_PATH = ../libft_rendu_pdf2022/libft.a
LIBC_TEST_FILES = main_libc.c ./test_libc/t_isalpha.c ./test_libc/t_isdigit.c ./test_libc/t_isalnum.c ./test_libc/t_bzero.c ./test_libc/t_memset.c ./test_libc/t_memmove.c ./test_libc/t_isprint.c ./test_libc/t_isascii.c ./test_libc/t_strlen.c ./test_libc/t_memcpy.c ./test_libc/t_atoi.c ./test_libc/t_strlcpy.c ./test_libc/t_strlcat.c ./test_libc/t_toupper.c ./test_libc/t_tolower.c ./test_libc/t_strchr.c ./test_libc/t_strrchr.c ./test_libc/t_strncmp.c ./test_libc/t_memchr.c ./test_libc/t_memcmp.c ./test_libc/t_strnstr.c

libc: $(LIBC_TEST_FILES)
	gcc -o exe_libc_test $(LIBC_TEST_FILES) $(LIBFT_PATH)

.PHONY: run_libc_tests
run_libc_tests: libc
	./exe_libc_test

.PHONY: clean
clean:
	rm -f exe_libc_test