/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstrjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:18:04 by stduval           #+#    #+#             */
/*   Updated: 2023/05/25 12:18:33 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getstrjoin(char *save, char *buf)
{
	int		i;
	int		c;
	char	*str;

	if (!save)
	{
		save = malloc(sizeof(char) + 1);
		save[0] = '\0';
	}
	if (!save)
		return (0);
	str = malloc(sizeof(char) * (ft_getstrlen(save) + ft_getstrlen(buf) + 1));
	if (!str)
		return (0);
	i = -1;
	c = 0;
	while (save && save[++i] != '\0')
		str[i] = save[i];
	while (buf && buf[c] != '\0')
		str[i++] = buf[c++];
	str[ft_getstrlen(save) + ft_getstrlen(buf)] = '\0';
	free (save);
	return (str);
}
