/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:58:02 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:29:50 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	ft_bzero(void *s, t_size n)
{
	unsigned char		*tmp_ptr;
	long unsigned int	i;

	tmp_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tmp_ptr[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char s[20] = "Hallo Welt!";
	char t[20] = "Hello World!";
	int	i;

	bzero(s + 6, sizeof(char) * 6);
	i = 0;
	while (s[i])
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	ft_bzero(&t[5], sizeof(char) * 6);
	i = 0;
	while (t[i])
	{
		printf("%c", t[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
