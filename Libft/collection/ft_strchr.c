/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:35:33 by elara-va          #+#    #+#             */
/*   Updated: 2025/04/19 17:49:35 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "ABCDEFGHI";
	int c = 'E';

	if (ft_strchr(s, c) != NULL)
		printf("%s\n", ft_strchr(s, c));
	else
		printf("0\n");
	return (0);
}*/
