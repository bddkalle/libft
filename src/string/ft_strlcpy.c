/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:22:12 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 13:04:25 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size			src_len;
	unsigned long	j;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	j = 0;
	while (j < (dstsize - 1) && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (src_len);
}

/*int	main(void)
{
	char	dst2[20];
	const char src[] = "Hello World!";

		ft_strlcpy(dst2, src, 13);
	printf("dst2 = %s", dst2);
	return (0);
}*/