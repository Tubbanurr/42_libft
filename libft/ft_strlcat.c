/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:13:13 by taksin            #+#    #+#             */
/*   Updated: 2023/07/13 22:51:55 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	t;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	t = ft_strlen(dst);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	i = 0;
	while (src[i] != '\0' && t < (dstsize - 1))
	{
		dst[t] = src[i];
		i++;
		t++;
	}
	dst[t] = '\0';
	return (lendst + lensrc);
}
