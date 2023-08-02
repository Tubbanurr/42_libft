/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksin <taksin@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:53:17 by taksin            #+#    #+#             */
/*   Updated: 2023/07/13 14:11:34 by taksin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			ft_lstclear(&result, del);
		if (!content)
			return (0);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&result, del);
			free(content);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
