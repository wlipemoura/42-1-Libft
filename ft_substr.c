#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*substring;
	size_t	substring_length;

	counter = 0;
	if (!s)
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		substring_length = 0;
	else
	{
		substring_length = ft_strlen(s + start);
		if (substring_length > len)
			substring_length = len;
	}
	substring = (char *)malloc(substring_length + 1);
	if (substring == NULL)
		return (NULL);
	while (counter < substring_length)
	{
		*(substring + counter) = *(s + start + counter);
		counter++;
	}
	*(substring + counter) = '\0';
	return (substring);
}
