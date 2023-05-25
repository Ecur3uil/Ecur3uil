/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:52:26 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:26:39 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description Écrit le caractère ’c’ sur le descripteur de
fichier donné.*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
