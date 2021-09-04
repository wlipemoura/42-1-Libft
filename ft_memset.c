#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		*(unsigned char *)(s + cont) = c;
		cont++;
	}
	return ((unsigned char *)s);
}
