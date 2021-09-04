#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	finalsize;

	finalsize = nmemb * size;
	p = malloc (finalsize);
	if (!p)
		return (NULL);
	ft_bzero (p, finalsize);
	return (p);
}
