/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:09:55 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:29:11 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	int	ret;

	ret = 0;
	ret = write(fd, &c, 1);
	if (ret == -1)
		return (-1);
	return (ret);
}
