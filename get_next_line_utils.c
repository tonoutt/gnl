/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 07:31:49 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/29 07:31:51 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

char	*ft_substr(char *s1, int count, int start)
{
	int	i;
	int	j;
	char	*out;;

	i = 0;
	j = 0;
	if (!(out = (char*) * malloc(sizeof(char) * (count + 1))))
		return (NULL);
	while (*s1)
	{
		if (start == 0 && s1[i] == '\n')
		{
			out[j + 1] = '\0';
			return (out);
		}
		if (i >= start)
		{
			out[j] = s1[i];
			j++;
		}
		i++;
	}
	if (start != 0)
		free(s1);
	out[j++] = '\0';
	return (out);
}
