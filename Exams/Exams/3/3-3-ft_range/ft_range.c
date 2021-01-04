/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:39:48 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:39:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *tab = NULL;
	int size;
	int temp;
	int i;

	temp = start;
	size = 0;
	i = 0;
	while (start <= end)
	{
		start++;
		size++;
	}
	tab = (int*)malloc(sizeof(int) * size + 1);
	start = temp;
	tab[size] = '\0';
	while (start <= end)
	{
		tab[i] = start;
		start++;
	}
	return (tab);
}

