/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:35:33 by elara-va          #+#    #+#             */
/*   Updated: 2025/04/19 17:49:59 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (i == 0)
		return (NULL);
	while (*s != c)
		s--;
	return ((char *)s);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "ABCDBFBHI";
	int c = 'B';

	if (ft_strrchr(s, c) != NULL)
		printf("%s\n", ft_strrchr(s, c));
	else
		printf("0\n");
	return (0);
}*/
