#include "get_next_line.h"
#include <fcntl.h>   // open
#include <stdio.h>   // printf

int main(int argc, char **argv)
{
    int     fd;
    char    *line;

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        return (1);
    }
    // printf("Reading from test.txt:\n");
    // while ((line = get_next_line(fd)) != NULL)
    // {
    //     printf("%s", line);
    //     free(line);
    // }
    // close(fd);
    printf("ft=0\n");
    while ((line = get_next_line(fd)) != NULL) // fd = 0 = stdin
    {
        printf("%s", line);
        free(line);
    }
    return (0);
}
