#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (*(unsigned char *)(s + counter) != (unsigned char)c)
			counter += sizeof(*(s + counter));
		else if (*(unsigned char *)(s + counter) == (unsigned char)c)
			return ((unsigned char *)(s + counter));
	}
	return (0);
}
