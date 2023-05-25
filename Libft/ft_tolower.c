/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:46:07 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:56:04 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The tolower() function converts an upper-case letter to the corresponding
lower-case letter.  The argument must be representable as an unsigned char or
the value of EOF.Although the tolower() function uses the current locale, the
tolower_l() function may be passed a locale directly. See xlocale(3) for more
information.*/
#include	"libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
