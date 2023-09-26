#include "../libtest.h"
#include <fcntl.h>
#include <sys/stat.h>

void t_putnbr_fd(void)
{
    printf("\n--------------------\ntesting ft_putnbr_fd:\n");

    // Test case with a string and standard output
    ft_putnbr_fd(-2147483648, STDOUT_FILENO);
    printf("\n");
    ft_putnbr_fd(2147483647, STDOUT_FILENO);

    // Test case with a string and a file
    int fd = open("PutnbrFdOutput.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    ft_putnbr_fd(0, fd);
    ft_putnbr_fd(223, fd);
    close(fd);

    // Add more test cases here

    // Edge case: Negative file descriptor
    ft_putnbr_fd(342, -1);
}