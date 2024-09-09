/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:43:41 by fschnorr          #+#    #+#             */
/*   Updated: 2024/09/09 15:35:26 by fschnorr         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	helperft_putptr(unsigned long long num, int fd)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += helperft_putptr(num / 16, fd);
		count += helperft_putptr(num % 16, fd);
	}
	else
	{
		if (num <= 9)
			count += ft_putchar_fd((num + '0'), fd);
		else
			count += ft_putchar_fd((num - 10 + 'a'), fd);
	}
	return (count);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	int	print_len;

	print_len = 0;
	print_len += write(fd, "0x", 2);
	if (!ptr)
		print_len += write(fd, "0", 1);
	else
		print_len += helperft_putptr((unsigned long long)ptr, fd);
	return (print_len);
}
