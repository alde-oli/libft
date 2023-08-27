#include "../libtest.h"
#include <fcntl.h>
#include <sys/stat.h>

void t_putendl_fd(void)
{
    printf("\n--------------------\ntesting ft_putendl_fd:\n");

    // Test case with a string and standard output
    ft_putendl_fd("Hello, world!", STDOUT_FILENO);
    ft_putendl_fd("oui oui!", STDOUT_FILENO);

    // Test case with a string and a file
    int fd = open("PutendlFdOutput.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    ft_putendl_fd("This is a test.", fd);
    ft_putendl_fd("Writing to a file.", fd);
    close(fd);

    // Add more test cases here

    // Edge case: Negative file descriptor
    ft_putendl_fd("Bonjour", -1);
}