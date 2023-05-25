/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:36:26 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 11:36:54 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhex(unsigned int num, const char spec)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, spec);
	return (ft_hexlen(num));
}
