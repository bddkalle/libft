/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:39:59 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:28:18 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			tmp = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (tmp);
}

/*int	main(void)
{
	const char s[] = "Hello World!";
	char *result1 = strrchr(s, 'z');
    char *result2 = ft_strrchr(s, 'z');

	if (result1 != NULL)
        printf("Return of strrchr = %s\n", result1);
	else
        printf("Return of strrchr = NULL\n");

	if (result2 != NULL)
        printf("Return of ft_strrchr = %s\n", result2);
	else
        printf("Return of ft_strrchr = NULL\n");
	return (0);
}*/