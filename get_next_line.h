/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 07:31:24 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/29 07:31:27 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

size_t	ft_strlen(char *s);
char	*ft_substr(char *s1, int count, int start);
int	ft_is_newline(char *word);
int	ft_find_line(char **word, char **line, int read_file);
char	*ft_strjoin(char *word, char *buff, int read_file);
int	ft_check(int fd, int line, char **buf, int buffer_size);
int	get_next_line(int fd, char **line);

#endif
