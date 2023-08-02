/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:18:22 by taksin            #+#    #+#             */
/*   Updated: 2023/07/18 10:06:47 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				t;
	int				n;
	unsigned int	a;

	t = 1;
	n = 0;
	a = 0;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			t *= (-1);
		n++;
	}
	while (ft_isdigit(str[n]))
	{
		a = str[n] - '0' + (a * 10);
		n++;
	}
	return (t * a);
}
