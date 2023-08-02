/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:24:11 by taksin            #+#    #+#             */
/*   Updated: 2023/07/13 22:45:55 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	int				i;
	size_t			total;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	total = ft_strlen(s1)+ ft_strlen(s2);
	result = (char *)malloc((sizeof(char) * total) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = ((unsigned char *)s1)[i];
		i++;
	}
	ft_strlcpy(result + i, s2, ft_strlen(s2) + 1);
	return (result);
}
