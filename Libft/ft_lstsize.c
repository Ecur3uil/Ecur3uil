/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:08:28 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:22:03 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Compte le nombre d’éléments de la liste*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstsize;

	lstsize = 0;
	while (lst)
	{
		lst = lst->next;
		++lstsize;
	}
	return (lstsize);
}
