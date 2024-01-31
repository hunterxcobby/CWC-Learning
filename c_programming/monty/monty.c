#include "monty.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    int fd;
    char buffer[BUFFER_SIZE];
    /*int line_number;*/
    int read_data;
    char *opcode;
    char *delimiter = " \n\t";

    if (argc != 2 || !argv[1])
    {
        fprintf(stderr, "USAGE: monty %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    read_data = read(fd, buffer, sizeof(buffer));
    

    if(read_data == -1)
    {
        printf("Unable to read data\n");
        exit(EXIT_FAILURE);
    }
    else if (read_data == 0)
    {
        printf("End of file\n");
    }
    else
    {
        opcode = strtok(buffer, delimiter);
        

    }


    close(fd);
    return(0);
}