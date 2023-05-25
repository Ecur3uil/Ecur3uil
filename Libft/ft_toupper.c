/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:35:51 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:57:07 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The toupper() function converts a lower-case letter to the corresponding
upper-case letter.  The argument must be representable as an unsigned char or
the value of EOF.Although the toupper() function uses the current locale, the
toupper_l() function may be passed a locale directly.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
