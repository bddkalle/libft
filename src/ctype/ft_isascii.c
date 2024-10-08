/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:28 by fschnorr          #+#    #+#             */
/*   Updated: 2024/07/08 11:19:31 by fschnorr         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'Q';
	printf("Result when uppercase alphabet is passed: %d", isascii(c));
	printf("\nResult of ft_isascii is: %d", ft_isascii(c));
	c = 'q';
	printf("\nResult when uppercase alphabet is passed: %d", isascii(c));
	printf("\nResult of ft_isascii is: %d", ft_isascii(c));
	c = '5';
	printf("\nResult when %c is passed: %d", c, isascii(c));
	printf("\nResult of ft_isascii is: %d\n", ft_isascii(c));
	c = '+';
	printf("\nResult when %c is passed: %d", c, isascii(c));
	printf("\nResult when %c is passed: %d", c, ft_isascii(c));
	c = 0x80;
	printf("\nResult when %c is passed: %d", c, isascii(c));
	printf("\nResult of ft_isascii is: %d", ft_isascii(c));
	return (0);
}
*/
