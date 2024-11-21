/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:05:35 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:27:41 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	t_size	i;
	t_size	j;

	if (!s1 || !s2)
		return (NULL);
	strjoin = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}

/*int	main(void)
{
	char const *s1 = NULL;
	char const s2[] = " World!";
	char	*s_joined;

	s_joined = ft_strjoin(s1, s2);
	if (!s_joined)
		printf("Allocation failed!\n");
	printf("Return = %s\n", s_joined);
	free(s_joined);
	return (0);
}*/