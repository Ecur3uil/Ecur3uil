/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:46:01 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:09:57 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isprint() function tests for any printing character, including space (` ')
The value of the argument must be representable as an unsigned char or the
value of EOF.*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
