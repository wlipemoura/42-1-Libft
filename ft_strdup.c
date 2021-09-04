#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	size_t	length;

	length = ft_strlen(s) + 1;
	new_string = malloc(length * sizeof(char));
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s, length);
	return (new_string);
}
