#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = (ft_strlen(s));
	while (*(s + counter) != (char) c && counter != 0)
		counter--;
	if (*(s + counter) == (char) c)
		return ((char *)s + counter);
	return (NULL);
}
