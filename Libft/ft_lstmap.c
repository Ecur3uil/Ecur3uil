/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:31:29 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 14:04:25 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Itère sur la liste ’lst’ et applique la fonction
’f ’au contenu de chaque élément. Crée une nouvelle
liste résultant des applications successives de
’f’. La fonction ’del’ est là pour détruire le
contenu d’un élément si nécessaire.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*anew;
	void	*tmp;

	if (!lst || !f)
		return (0);
	anew = 0;
	while (lst)
	{
		tmp = (f)(lst->content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			free (tmp);
			ft_lstclear(&anew, del);
			break ;
		}
		ft_lstadd_back(&anew, new);
		lst = lst->next;
	}
	return (anew);
}
