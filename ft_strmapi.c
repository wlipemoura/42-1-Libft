#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	counter;
	size_t			stringlen;
	char			*newstring;
	char			character;

	stringlen = ft_strlen(s);
	counter = 0;
	newstring = ft_calloc(stringlen + 1, sizeof(char));
	if (!newstring)
		return (NULL);
	while (counter < stringlen)
	{
		character = *(char *)(s + counter);
		*(newstring + counter) = (*f)(counter, character);
		counter++;
	}
	return (newstring);
}
