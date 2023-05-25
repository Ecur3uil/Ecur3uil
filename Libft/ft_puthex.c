/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:35:45 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 11:36:09 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned int num, const char spec)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, spec);
		ft_puthex(num % 16, spec);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (spec == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (spec == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}
