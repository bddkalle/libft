/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:09:49 by fschnorr          #+#    #+#             */
/*   Updated: 2024/08/12 12:49:38 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <ctype.h>*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	char	c;

	c = '!';
	printf("Result of toupper = %c\n", toupper(c));
	printf("Result of ft_toupper = %c\n", ft_toupper(c));
	return (0);
}
*/