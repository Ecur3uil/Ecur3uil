/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 08:26:59 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:25:20 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies len bytes from string src to string dst. 
The two strings may overlap; the copy is always done in a non-destructive
manner.*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL || src == NULL)
		return (dst);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
