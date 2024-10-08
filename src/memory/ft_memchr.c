/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:39:59 by fschnorr          #+#    #+#             */
/*   Updated: 2024/08/12 17:24:03 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, t_size n)
{
	const unsigned char	*ptr_s;

	ptr_s = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		n--;
		ptr_s++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char test_string[] = "Hello World!";
	int search_char = 'z';
	t_size n = strlen(test_string);

	printf("memchr result: %p\n", memchr(test_string, search_char, n));
    printf("ft_memchr result: %p\n", ft_memchr(test_string, search_char, n));

	if (result1 != NULL)
        printf("Return of memchr = %s\n", result1);
	else
        printf("Return of strchr = NULL\n");

	if (result2 != NULL)
        printf("Return of ft_strchr = %s\n", result2);
	else
        printf("Return of ft_strchr = NULL\n");
	return (0);
}*/