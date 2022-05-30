/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:08:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/05/30 12:16:44 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

char	*get_next_line(int fd);

char	*read_file_until_find_next_line(int fd, char *aux_str);
char	*get_part_before_next_line_from_work_string(char *aux_str);
char	*get_part_after_next_line_from_work_string(char *aux_str);

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *aux_str, char *buffer);

#endif