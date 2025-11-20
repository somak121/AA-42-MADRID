/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:24:17 by smikhail          #+#    #+#             */
/*   Updated: 2025/11/20 17:33:02 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

char	*get_next_line_bonus(int fd);

// utils
size_t	gnl_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_strdup(const char *s);
int		gnl_find_newline(char *s);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

char	*part_buffer_add(int fd, char *part, char *buffer);
char	*check_new_line(char **part);

#endif
