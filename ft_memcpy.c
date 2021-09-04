#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (cont < n)
	{
		*(char *)(dest + cont) = *(char *)(src + cont);
		cont++;
	}
	return ((char *) dest);
}
