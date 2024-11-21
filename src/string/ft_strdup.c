/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:12:58 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:27:30 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	unsigned char	*tmp;
	int				s1_len;
	int				i;

	s1_len = ft_strlen(s1);
	tmp = (unsigned char *)malloc((s1_len + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return ((char *)tmp);
}

/*int	main(void)
{
	const char s1[] = "Hello World!";
	char	*s2;
	char	*s3;

	s2 = strdup(s1);
	printf("Return of strdup = %s\n", s2);
	free(s2);

	s3 = ft_strdup(s1);
	printf("Return of ft_strdup = %s\n", s3);
	free(s3);
	return (0);
}*/