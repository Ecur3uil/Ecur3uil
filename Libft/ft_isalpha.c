/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:57:05 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:10:19 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalpha() function tests for any character for which isupper(3) or
islower(3) is true.  The value of the argument must be representable as an
unsigned char or the value of EOF.*/
int	ft_isalpha(int c)
{
	if (!(c < 'A' || (c > 'Z' && c < 'a') || c > 'z'))
	{
		return (1);
	}
	else
		return (0);
}
