#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (*(s1 + cont) && *(s2 + cont)
		&& cont < (n - 1) && (*(s1 + cont) == *(s2 + cont)))
		cont++;
	if ((*(s1 + cont) != *(s2 + cont) && n))
		return ((char) *(s1 + cont) - (char) *(s2 + cont));
	return (0);
}
