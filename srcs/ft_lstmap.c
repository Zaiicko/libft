/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:40:34 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 22:02:10 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		new_content = (*f)(lst->content);
		temp = ft_lstnew(new_content);
		if (!temp)
		{
			del(new_content);
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, temp);
		lst = lst->next;
	}
	return (node);
}
