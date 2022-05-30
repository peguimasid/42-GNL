/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:06:30 by gmasid            #+#    #+#             */
/*   Updated: 2022/05/30 12:07:18 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}

char	*ft_strjoin(char *work_str, char *buffer)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!work_str)
	{
		work_str = malloc(1 * sizeof(char));
		work_str[0] = '\0';
	}
	if (!work_str || !buffer)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(work_str) + ft_strlen(buffer)
				+ 1));
	if (!result)
		return (NULL);
	i = -1;
	if (work_str)
		while (work_str[++i])
			result[i] = work_str[i];
	j = 0;
	while (buffer[j])
		result[i++] = buffer[j++];
	result[ft_strlen(work_str) + ft_strlen(buffer)] = '\0';
	free(work_str);
	return (result);
}

char	*get_part_before_next_line_from_work_string(char *work_str)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!work_str[i])
		return (NULL);
	while (work_str[i] && work_str[i] != '\n')
		i++;
	result = malloc(sizeof(char) * (i + 2));
	if (!result)
		return (NULL);
	i = 0;
	while (work_str[i] && work_str[i] != '\n')
	{
		result[i] = work_str[i];
		i++;
	}
	if (work_str[i] == '\n')
	{
		result[i] = work_str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_part_after_next_line_from_work_string(char *work_str)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	while (work_str[i] && work_str[i] != '\n')
		i++;
	if (!work_str[i])
	{
		free(work_str);
		return (NULL);
	}
	result = malloc(sizeof(char) * (ft_strlen(work_str) - (i + 1)));
	i++;
	j = 0;
	while (work_str[i])
		result[j++] = work_str[i++];
	result[i] = '\0';
	free(work_str);
	return (result);
}
