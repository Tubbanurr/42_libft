/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:04:48 by taksin            #+#    #+#             */
/*   Updated: 2023/07/08 15:08:47 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sd;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	i = 0;
	j = 0;
	while ((i < len) && s[start + i] != '\0')
		i++;
	sd = (char *) malloc((sizeof (char) * i) + 1);
	if (sd == NULL)
		return (NULL);
	while (j < i)
	{
		sd[j] = s[j + start];
		j++;
	}
	sd[j] = '\0';
	return (sd);
}
