/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:12:43 by taksin            #+#    #+#             */
/*   Updated: 2023/07/13 22:35:20 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	else if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}
