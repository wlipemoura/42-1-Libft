#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	counter;

	counter = 0;
	while (*(s + counter))
	{
		(*f)(counter, (s + counter));
		counter++;
	}
}
