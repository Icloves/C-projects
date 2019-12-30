// #include "fillit.h"

// int main(int argc, char **argv)
// {
//     int kek;
//     char *lol;
//     char *line;
//     int fd;
//     int valid;
//     char *buf;
//     char *str;
//     char *temp;
//     int i = 0;

//     if (argc == 1)
//     {
//         fd = open("tetrominos", O_RDONLY);
//         buf = ft_strnew(21);
//         while ((valid = read(fd, buf, 21)))
//         {
//             temp = ft_strjoin(line, buf);
//             line = temp;
//         }
//     }
//     else 
//     {
//         ft_putstr("its fault usage");
//         return 0;
//     }
//     // while (temp[i] != '\0')
//     // {
//     //     printf("%s", temp[i]);
//     //     i++;
//     // }
//     printf("%s\n", temp);
//     return 0;
// }

/*

compiling:

clang -I libft/includes -o main.o -c main.c 
clang -o fillit main.o get_next_line/get_next_line.o -I get_next_line/libft/includes -L get_next_line/libft/ -lft

*/