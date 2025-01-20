/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:19:53 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 12:59:05 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, t_size n)
{
	unsigned char	*tmp_dest_ptr;
	unsigned char	*tmp_src_ptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	tmp_dest_ptr = (unsigned char *) dest;
	tmp_src_ptr = (unsigned char *) src;
	if (tmp_dest_ptr > tmp_src_ptr)
		while (n-- > 0)
			tmp_dest_ptr[n] = tmp_src_ptr[n];
	else
		while (n-- > 0)
			*tmp_dest_ptr++ = *tmp_src_ptr++;
	return (dest);
}

/*int	main(void)
{
	char src[20] = "Hello World!";
	char dest[20];
	char dest2[20];

	memmove(dest, src, 5);
	dest[5] = '\0';
	printf("Dest = %s\n", dest);
	//ft_memmove(dest2, src, 7);
	ft_memmove(((void *)0), ((void *)0), 7);
	dest2[7] = '\0';
	printf("Dest2 = %s\n", dest2);
	return(0);
}*/