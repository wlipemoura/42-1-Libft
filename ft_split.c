#include "libft.h"

static size_t	howmanystrings(const char *s, char c)
{
	size_t	manystrs;
	size_t	count;

	manystrs = 0;
	count = 0;
	while (*(s + count))
	{
		if (*(s + count) != c)
		{
			manystrs++;
			while (*(s + count) != c && *(s + count))
				count++;
		}
		while (*(s + count) == c && *(s + count))
			count++;
	}
	return (manystrs);
}

static size_t	chars(const char *s, char c)
{
	size_t	thismanychars;

	thismanychars = 0;
	while (*(s + thismanychars) != c
		&& *(s + thismanychars))
		thismanychars++;
	return (thismanychars);
}

static void	freespace(char **s, size_t count)
{
	while (count > 0)
	{
		free(*(s + count));
		count--;
	}
	free(s);
}

static void	splitter(const char *s, char c, size_t *manystrs, char **spltd)
{
	size_t	hmnychar_index;
	size_t	hmnyspltd_index;

	hmnychar_index = 0;
	hmnyspltd_index = 0;
	while (*s && hmnychar_index < *manystrs)
	{
		while (*s == c)
			s++;
		if (hmnyspltd_index == 0)
			*(spltd + hmnychar_index) = ft_calloc (1, chars(s, c) + 1);
		if (!spltd)
		{
			freespace(spltd, hmnychar_index);
			return ;
		}
		spltd[hmnychar_index][hmnyspltd_index] = *s;
		s++;
		hmnyspltd_index++;
		if (*s == c)
		{
			hmnychar_index++;
			hmnyspltd_index = 0;
		}
	}
}

char	**ft_split(const char *s, char c)
{
	char	**spltd;
	size_t	manystrs;

	if (!s)
		return (NULL);
	manystrs = howmanystrings(s, c);
	spltd = ft_calloc(sizeof(char *), manystrs + 1);
	if (!spltd)
		return (NULL);
	splitter(s, c, &manystrs, spltd);
	return (spltd);
}
