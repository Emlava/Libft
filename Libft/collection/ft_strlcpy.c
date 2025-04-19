/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:29:45 by elara-va          #+#    #+#             */
/*   Updated: 2025/04/17 18:38:54 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hello!";
	char cpy_dst[20] = "Hello";
	char src[5] = "Bye!";
	size_t size = 5;

	ft_strlcpy(dst, src, size);
	printf("Destination: %s, Length of Source: %zu\n",
		dst, ft_strlcpy(cpy_dst, src, size));
	return (0);
}*/
