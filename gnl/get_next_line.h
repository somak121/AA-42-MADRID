/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:39:15 by smikhail          #+#    #+#             */
/*   Updated: 2025/11/16 18:38:06 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
#include <stdlib.h>


char   *get_next_line(int fd);//main function

//get_next_line_utils functions
int     gnl_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_strdup(const char *s);
int	    gnl_find_newline(char *s);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

char	*part_buffer_add(int fd, char *part, char *buffer);
char    *check_new_line(char **part);


#endif