/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:13:55 by elara-va          #+#    #+#             */
/*   Updated: 2025/04/19 16:33:53 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	dest_len = i;
	if (dest_len < size - 1)
	{
		while (i <= size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	if (i < size)
		dst[i] = '\0';
	while (src[j])
		j++;
	return (dest_len + j);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[16] = "Hello";
	char src[11] = "! And bye!";
	size_t size = 16;

	printf("Strlen: %zu\n", ft_strlcat(dst, src, size));
	printf("String: %s", dst);
	return (0);
}*/
