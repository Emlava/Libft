
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

#include <stdio.h>

int	main(void)
{
	char dst[15] = "Hello";
	char cpy_dst[15] = "Hello";
	char src[11] = "! And bye!";
	size_t size = 15;

	ft_strlcat(dst, src, size);
	printf("Destination: %s\n", dst);
	return (0);
}
