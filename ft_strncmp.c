/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:39:09 by fschnorr          #+#    #+#             */
/*   Updated: 2024/08/12 16:08:46 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*(int	main(void)
{
	const char s1[] = "Hello World!";
	const char s2[] = "Hello World";

	printf("Return of strncmp = %d\n", strncmp(s1, s2, 12));
	printf("Return of ft_strncmp = %d\n", ft_strncmp(s1, s2, 12));
	return (0);
}*/