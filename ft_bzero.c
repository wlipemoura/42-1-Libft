#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		*(char *)(s + cont) = '\0';
		cont++;
	}
	return (NULL);
}
