/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:32 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/09 18:18:14 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	substring = ft_calloc(substring_length + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_memmove(substring, s + start, substring_length);
	return (substring);
}
