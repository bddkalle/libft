/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:28 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:30:34 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = '5';
	printf("Result when numeric character is passed: %d", isdigit(c));
	printf("\nResult of ft_isdigit is: %d", ft_isdigit(c));
	c = ':';
	printf("\nResult when non-numeric character is passed: %d", isdigit(c));
	printf("\nResult of ft_isdigit is: %d\n", ft_isdigit(c));
	return (0);
}
*/
