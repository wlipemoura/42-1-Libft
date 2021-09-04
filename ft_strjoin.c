#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	int		lens1;
	int		lens2;

	lens1 = ft_strlen (s1);
	lens2 = ft_strlen (s2);
	newstring = ft_calloc ((lens1 + lens2 + 1), sizeof (char));
	if (!newstring)
		return (NULL);
	ft_memcpy (newstring, s1, lens1);
	ft_memcpy (newstring + lens1, s2, lens2);
	return (newstring);
}
