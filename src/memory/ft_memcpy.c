/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:01 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 12:58:59 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size n)
{
	unsigned char		*tmp_ptr;
	const unsigned char	*tmp_src;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	tmp_ptr = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	while (n > 0)
	{
		*tmp_ptr = *tmp_src;
		tmp_ptr++;
		tmp_src++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char src[20] = "Hallo Welt!";
	char dest[20];
	char dest2[20];
	
	memcpy(((void *)0), ((void *)0), 5);
	dest[5] = '\0';
	printf("Return of memcpy() = %s\n", dest);
	ft_memcpy(((void *)0), ((void *)0), 5);
	dest[7] = '\0';
	printf("Result of ft_memcpy() = %s\n", dest2);
	return (0);
}*/
