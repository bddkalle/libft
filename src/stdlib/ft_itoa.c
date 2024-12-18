/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:44:29 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:29:04 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;
	int		i;

	nbr = n;
	len = ft_int_len(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = len - 1;
	if (nbr == 0)
		str[i] = '0';
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

/*int	main(void)
{
	int		n;
	char	*str;

	n = 0;
	str = ft_itoa(n);
	printf("Return of ft_itoa = %s\n", str);
	free(str);
	return (0);
}*/