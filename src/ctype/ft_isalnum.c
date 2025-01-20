/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:28 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 12:57:14 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'Q';
	printf("Result when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult of ft_isalpha is: %d", ft_isalnum(c));
	c = 'q';
	printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult of ft_isalpha is: %d", ft_isalnum(c));
	c = '5';
	printf("\nResult when %c is passed: %d", c, isalnum(c));
	printf("\nResult of ft_isalpha is: %d\n", ft_isalnum(c));
	c = '+';
	printf("\nResult when %c is passed: %d", c, isalnum(c));
	printf("\nResult when %c is passed: %d", c, ft_isalnum(c));
	return (0);
}*/
