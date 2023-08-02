/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:40:47 by taksin            #+#    #+#             */
/*   Updated: 2023/07/18 11:43:20 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_len(int n)

{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)

{
	char	*ptr;
	int		len;
	int		sign;

	sign = 1;
	len = ft_get_len(nbr);
	if (nbr < 0)
		sign = -1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
	{
		ptr[len] = (nbr % 10) * sign + '0';
		nbr /= 10;
	}
	if (sign == -1)
		ptr[0] = '-';
	return (ptr);
}
