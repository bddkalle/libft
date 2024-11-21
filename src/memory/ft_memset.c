/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:04:30 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:30:14 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char		*tmp_ptr;
	long unsigned int	i;

	tmp_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tmp_ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[10];
	int	i;

	memset(s, 'b', sizeof(char) * 5);
	memset(s + 5, 'c', sizeof(char) * 5);
	i = 0;
	while (i < 10)
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	ft_memset(s, 'd', sizeof(char) * 9);
	i = 0;
	while (i < 10)
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
        return (0);
}*/
