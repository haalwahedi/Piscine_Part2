/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:28:12 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 11:28:35 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *t;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	t = (int *)malloc(sizeof(int) * (max - min));
	if (t == 0)
		return (-1);
	if (range == 0)
		return (-1);
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	*range = t;
	return (i);
}
