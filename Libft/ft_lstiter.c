/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:21:11 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:18:53 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
