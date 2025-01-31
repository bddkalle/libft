/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_isin_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:09:03 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 13:05:22 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_c_isin_str(char c, char *str)
{
	while (*str && *str != c)
		str++;
	if (!*str)
		return (0);
	return (1);
}
/*
int	main(void)
{
	char str[] = "Hello World!";

	printf("Return of ft_c_isn_str = %d\n", ft_c_isin_str('e', str));
	return (0);
}*/