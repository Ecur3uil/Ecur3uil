/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:52:01 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 12:11:08 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function computes the length of the string s.  The strnlen()
function attempts to compute the length of s, but never scans beyond the first
maxlen bytes of s.*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
