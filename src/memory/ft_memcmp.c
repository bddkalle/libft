/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:39:09 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 12:58:50 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n > 0 && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*ptr1 - *ptr2);
}

/*int	main(void)
{
	const char s1[] = "Hello World";
	const char s2[] = "Hello World!";

	printf("Return of memcmp = %d\n", memcmp(s1, s2, 12));
	printf("Return of ft_memcmp = %d\n", ft_memcmp(s1, s2, 12));
	return (0);
}*/