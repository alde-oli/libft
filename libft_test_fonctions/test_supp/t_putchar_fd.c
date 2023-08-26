#include "../libtest.h"
#include <fcntl.h>
#include <sys/stat.h> // For file descriptor constants

static void t_putchar_fd_u(char c, int fd)
{
    printf("Character: '%c', File Descriptor: %d\n", c, fd);

    // Capture the current standard output to a file descriptor
    int stdout_fd = dup(STDOUT_FILENO);

    // Redirect stdout to the specified file descriptor
    dup2(fd, STDOUT_FILENO);

    // Call ft_putchar_fd
    ft_putchar_fd(c, STDOUT_FILENO);

    // Reset stdout to the original file descriptor
    dup2(stdout_fd, STDOUT_FILENO);
    close(stdout_fd);

    printf("\n");
}


void t_putchar_fd(void)
{
    printf("\n--------------------\ntesting ft_putchar_fd:\n");

    // Test cases with different characters and file descriptors
    t_putchar_fd_u('H', STDOUT_FILENO); // Print to standard output
    t_putchar_fd_u('e', STDOUT_FILENO);
    t_putchar_fd_u('l', STDOUT_FILENO);
    t_putchar_fd_u('l', STDOUT_FILENO);
    t_putchar_fd_u('o', STDOUT_FILENO);

    // Print to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    t_putchar_fd_u('W', fd);
    t_putchar_fd_u('r', fd);
    t_putchar_fd_u('i', fd);
    t_putchar_fd_u('t', fd);
    t_putchar_fd_u('e', fd);
    close(fd);

    // Add more test cases here

    // Edge case: Negative file descriptor
    t_putchar_fd_u('X', -1);
}

int main()
{
    t_putchar_fd();
}