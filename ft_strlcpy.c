#include "libft.h"

char	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(src + counter) != '\0' && counter < size - 1)
	{
		*(dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + counter) = '\0';
	return (ft_strlen(src));
}
