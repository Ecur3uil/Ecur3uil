/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:20:41 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 11:21:07 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str == 0)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}