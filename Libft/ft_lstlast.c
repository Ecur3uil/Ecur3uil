/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:29:25 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 14:06:56 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Renvoie le dernier élément de la liste.*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next)
		lst = lst -> next;
	return (lst);
}
