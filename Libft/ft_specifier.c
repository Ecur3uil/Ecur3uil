/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:26:10 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 11:26:41 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_specifier(va_list args, const char spec)
{
	int	len;

	len = 0;
	if (spec == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (spec == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (spec == 'p')
		len += ft_printptr(va_arg(args, unsigned long long ));
	else if (spec == 'd' || spec == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (spec == 'u')
		len += ft_printuint(va_arg(args, unsigned int));
	else if (spec == 'x' || spec == 'X')
		len += ft_printhex(va_arg(args, unsigned int), spec);
	else if (spec == '%')
		len += ft_printpercent();
	return (len);
}