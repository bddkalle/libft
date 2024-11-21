/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:18:11 by fschnorr          #+#    #+#             */
/*   Updated: 2024/11/21 16:28:55 by fschnorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(t_size count, t_size size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
		ptr[i++] = 0;
	return (ptr);
}

/*int	main(void)
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	printf("The array elements are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);

	int *arr2 = (int*)calloc(n, (n * sizeof(int)));
	if (arr2 == NULL)
	{
		printf("Memory allocation2 failed!\n");
		return (1);
	}
	for (int i = 0; i < n; i++)
		arr2[i] = i + 1;
	printf("The array2 elements are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	free(arr2);

	int *arr3 = (int*)ft_calloc(n, (n * sizeof(int)));
	if (arr3 == NULL)
	{
		printf("Memory allocation3 failed!\n");
		return (1);
	}
	for (int i = 0; i < n; i++)
		arr3[i] = i + 1;
	printf("The array3 elements are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	free(arr3);
	return(0);
}*/