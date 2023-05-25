/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:06:51 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:28:00 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Écrit la chaîne de caractères ’s’ sur le
descripteur de fichier donné.*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
