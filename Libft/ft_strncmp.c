/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:35:24 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:49:59 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strncmp() functions lexicographically compare thenull-terminated strings s1
and s2. The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data, characters
that appear after a `\0' character are not compared.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
