/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:56:00 by taksin            #+#    #+#             */
/*   Updated: 2023/07/13 22:26:21 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i)))
			return (*((unsigned char *)(s1 + i)) -
				(*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
