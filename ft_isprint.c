/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:28 by fschnorr          #+#    #+#             */
/*   Updated: 2024/07/12 14:05:00 by fschnorr         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'Q';
	printf("Result when %c is passed: %d", c, isprint(c));
	printf("\nOwn result for %c is: %d", c, ft_isprint(c));
	c = '\n';
	printf("\nResult when %c is passed: %d", c, isprint(c));
	printf("\nOwn result for %c is: %d", c, ft_isprint(c));
	c = ' ';
	printf("\nResult when %c is passed: %d", c, isprint(c));
	printf("\nOwn result for %c is: %d", c, ft_isprint(c));
	return (0);
}*/
