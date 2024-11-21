/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:39:59 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:27:20 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	const char s[] = "Hello World!";
	char *result1 = strchr(s, '\0');
    char *result2 = ft_strchr(s, '\0');

	if (result1 != NULL)
        printf("Return of strchr = %s\n", result1);
	else
        printf("Return of strchr = NULL\n");

	if (result2 != NULL)
        printf("Return of ft_strchr = %s\n", result2);
	else
        printf("Return of ft_strchr = NULL\n");
	return (0);
}*/