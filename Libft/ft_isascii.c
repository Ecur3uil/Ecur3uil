/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:24:53 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:10:09 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isascii() function tests for an ASCII character, which is any character
between 0 and octal 0177 inclusive.*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
