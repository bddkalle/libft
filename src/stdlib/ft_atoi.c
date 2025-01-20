/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:13:54 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 13:02:58 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (c);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				i;
	int				sign_trigger;

	i = 0;
	sign_trigger = 1;
	result = 0;
	while (ft_isspace(str[i]) && str[i])
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign_trigger = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	result = result * sign_trigger;
	return ((int)result);
}

/*int	main(void)
{
	const char str [] = "+42";

	printf("Return of atoi = %d\n", atoi(str));
	printf("Return of ft_atoi = %d\n", ft_atoi(str));
	return (0);
}*/