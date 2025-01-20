/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:24:34 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 13:03:47 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	int				i;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i = 0;
	while (tmp_s1[i] && tmp_s1[i] == tmp_s2[i])
		i++;
	return (tmp_s1[i] - tmp_s2[i]);
}

/*int	main(void)
{
	const char s1[] = "Hello World";
	const char s2[] = "Hello World!";

	printf("Return of strcmp = %d\n", strcmp(s1, s2));
	printf("Return of ft_strcmp = %d\n", ft_strcmp(s1, s2));
	return (0);
}*/
