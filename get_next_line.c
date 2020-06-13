/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 07:31:39 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/29 07:31:41 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_is_newline(char *word)
{
	char	*ptr_word;

	ptr_word = word;
	if (word == NULL)
		return (0);
	while (*ptr_word)
	{
		if (*ptr_word == '\n')
			return (1);
		ptr_word++;
	}
	return (0);
}
int	ft_find_line(char **word, char **line, int read_file)
{
	int i;

	i = 0;
	if ((i = ft_is_newline(*word)) == 1 || (read_file == 0 && (*word && **word)))
	{
		free(*line);
			*line = ft_substr(*word, ft_strlen(*word), 0);
}

char	*ft_strjoin(char *word, char *buff, int read_file)
{
	char	*out;
	char	*ptr_out;

	if (!(out = (char *) * malloc(sizeof(char) * (ft_strlen(word) + read_file + 1))))
		return (NULL);
	ptr_out = out;
	if (word)
	{
		while (*word)
			ptr_out++ = word++;
		free(word);
	}
	while (*buf)
		ptr_out++ = buf++;
	ptr_out++ = '\0';
	return (out);
}

int	ft_check(int fd, int line, char **buf, int buffer_size)
{
	int	i;
	
	i = 0;
	if (fd < 0 || !line || buffer_size < 1)
		return (-1);
	if (!(*buf = (char) * malloc(sizeof(char) * (buffer_size + 1))))
		return (-1);
	while (buf[i++])
		buf[i] = '\0';
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*word = NULL;
	char	*buf;
	int	read_file;

	read_file = 1;
	if (ft_check(fd, line, &buf, BUFFER_SIZE) == -1)
		return (-1);
	while (read_file > 0 || (read_file == 0 && (word && *word)))
	{
		if (ft_find_line(&word, line, read_file) == 1)
		{
			free(buf);
			return (1);
		}
		if ((read_file = read(fd, buf, BUFFER_SIZE)) = -1)
		{
			free (buf);
			free (word);
			return (-1);
		}
		if (read_file != 0)
			word = ft_strjoin(word, buf, read_file);
	}
	free (buf);
	free (word);
	word = NULL;
	return (0);
}
