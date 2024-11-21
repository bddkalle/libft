/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:07:56 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:27:46 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <string.h>

t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size				dst_len;
	t_size				src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
	{
		dst_len = dstsize;
		return (dst_len + src_len);
	}
	if (dstsize > dst_len + src_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len -1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

/*int	main(void)
{
    char    dst[] = "HelloHello";
    char    src[] = " World!";

    ft_strlcat(dst, src, 0);
    printf("dst = %s\n", dst);
    return (0);
}*/