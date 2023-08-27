#include "../libtest.h"
#include <fcntl.h>
#include <sys/stat.h>

void t_putstr_fd(void)
{
    printf("\n--------------------\ntesting ft_putstr_fd:\n");

    // Test case with a string and standard output
    ft_putstr_fd("Hello, world!", STDOUT_FILENO);
    ft_putstr_fd("oui oui!", STDOUT_FILENO);

    // Test case with a string and a file
    int fd = open("PutstrFdOutput.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    ft_putstr_fd("This is a test.", fd);
    ft_putstr_fd("Writing to a file.", fd);
    close(fd);

    // Add more test cases here

    // Edge case: Negative file descriptor
    ft_putstr_fd("Bonjour", -1);
}