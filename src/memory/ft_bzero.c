/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:58:02 by fschnorr          #+#    #+#             */
/*   Updated: 2025/01/20 12:58:30 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
