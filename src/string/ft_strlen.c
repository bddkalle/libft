/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:59:20 by fschnorr          #+#    #+#             */
/*   Updated: 2024/07/08 15:53:52 by fschnorr         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

t_size	ft_strlen(const char *s)
{
	t_size	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char a[20] = "Hallo Welt!";
	char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

	printf("Length of string a = %zu \n", strlen(a));
	printf("Own result is = %zu \n", ft_strlen(a));
	printf("Length of string b = %zu \n", strlen(b));
	printf("Own result is = %zu \n", ft_strlen(b));
	return (0);
}*/
