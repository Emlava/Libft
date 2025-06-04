/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:30:13 by elara-va          #+#    #+#             */
/*   Updated: 2025/06/03 20:55:12 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif
# include <unistd.h>
# include <sys/types.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	strlen_nl(const char *s);
void	cpy_buf_to_line(char *line, char *buf);
ssize_t	find_nl(char *buf);
char	*strjoin_free(char *line, char *next_part_of_line);
void	cpy_buf_to_buf(char *new_buf, char *old_buf);

#endif
