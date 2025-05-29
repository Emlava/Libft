/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:19:50 by elara-va          #+#    #+#             */
/*   Updated: 2025/05/20 13:06:23 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_c(unsigned char c);
int		ft_s(const char *s);
int		ft_p(void *p);
int		ft_d_i(int d_i, int flags);
int		ft_u(unsigned int u);
int		ft_xx(const char **format, unsigned int xx, int flags);
int		ft_percent(void);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
