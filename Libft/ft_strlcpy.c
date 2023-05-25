/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:30:31 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:46:30 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() functions copy and concatenate strings with the same input
parameters and output result as snprintf(3).strlcpy() and strlcat() take the
full size of the destination buffer and guarantee NUL-termination if there is
room.  Note that room for the NUL should be included in dstsize. strlcpy()
copies up to dstsize - 1 characters from the string src to dst, NUL-terminating
the result if dstsize is not 0.*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	srcsize = ft_strlen(src);

	if (!dst || !src)
		return (0);
	if (srcsize + 1 < dstsize)
	{
		ft_memcpy(dst, src, srcsize +1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srcsize);
}
