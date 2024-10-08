/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isin_strs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:09:03 by fschnorr          #+#    #+#             */
/*   Updated: 2024/08/26 15:05:01 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_str_isin_strs(char *needle, char **needle_box)
{
	int	i;
	int	j;

	i = 0;
	while (needle_box[i])
	{
		j = 0;
		while (needle_box[i][j] && needle_box[i][j] == needle[j])
			j++;
		if (!needle[j] && !needle_box[i][j])
			return (1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char *strs[] = {"Hello Word", "Hallo Welt", "Hello World!", NULL};
	char str_tofind[] = "Hello Word";

	printf("Return = %d\n", ft_str_isin_strs(str_tofind, strs));
	return (0);
}*/