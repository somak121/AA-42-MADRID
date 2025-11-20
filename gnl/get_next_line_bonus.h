#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);

// utils
int		gnl_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_strdup(const char *s);
int		gnl_find_newline(char *s);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

char	*part_buffer_add(int fd, char *part, char *buffer);
char	*check_new_line(char **part);

#endif