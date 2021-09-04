/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:29 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 20:18:03 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimmedstart(char const *s1, char const *set)
{
	int	set_counter;
	int	s1_counter;

	set_counter = 0;
	s1_counter = 0;
	while (*(s1 + s1_counter) && *(set + set_counter))
	{
		if (*(s1 + s1_counter) == *(set + set_counter))
		{
			s1_counter++;
			set_counter = 0;
		}
		else
			set_counter++;
	}
	return (s1_counter);
}

static int	trimmedend(char const *s1, char const *set)
{
	int	set_counter;
	int	s1_counter;

	set_counter = 0;
	s1_counter = ft_strlen(s1) - 1;
	while (*(set + set_counter))
	{
		if (*(s1 + s1_counter) == *(set + set_counter))
		{
			s1_counter--;
			set_counter = 0;
		}
		else
			set_counter++;
	}
	return (s1_counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		trimmed_start;
	int		trimmed_end;
	int		timmed_counter;
	char	*trimmedstring;

	timmed_counter = 0;
	trimmed_start = trimmedstart(s1, set);
	trimmed_end = trimmedend(s1, set);
	if (trimmed_end - trimmed_start + 1 > 0)
		trimmedstring = ft_calloc(trimmed_end - trimmed_start + 2, 1);
	else
	{
		trimmedstring = ft_calloc(1, sizeof(char));
		return (trimmedstring);
	}
	if (!trimmedstring)
		return (NULL);
	while (trimmed_start <= trimmed_end)
	{
		*(trimmedstring + timmed_counter) = *(s1 + trimmed_start);
		timmed_counter++;
		trimmed_start++;
	}
	timmed_counter = 0;
	return (trimmedstring + timmed_counter);
}
