/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:28 by fschnorr          #+#    #+#             */
/*   Updated: 2024/08/05 14:22:54 by fschnorr         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'Q';
	printf("Result when uppercase alphabet is passed: %d", isalpha('0'));
	printf("\nResult of ft_isalpha is: %d", ft_isalpha('0'));
	c = 'q';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
	printf("\nResult of ft_isalpha is: %d", ft_isalpha(c));
	c = '+';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
	printf("\nResult of ft_isalpha is: %d\n", ft_isalpha(c));
	return (0);
}*/
