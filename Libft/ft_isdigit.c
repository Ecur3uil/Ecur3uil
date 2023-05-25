/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stduval <stduval@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:31:03 by stduval           #+#    #+#             */
/*   Updated: 2023/01/20 13:10:03 by stduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isdigit() function tests for a decimal digit character.  Regardless of
locale, this includes the following characters only:(0 to 9)*/
int	ft_isdigit(int c)
{
	if (!(c < '0' || c > '9'))
	{
		return (1);
	}
	else
		return (0);
}
