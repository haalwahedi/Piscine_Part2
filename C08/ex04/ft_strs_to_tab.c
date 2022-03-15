/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:27:35 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 15:27:50 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char					*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*result;

	result = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		result[index].size = ft_strlen(av[index]);
		result[index].str = malloc((result[index].size + 1) * sizeof(char));
		result[index].copy = malloc((result[index].size + 1) * sizeof(char));
		ft_strcpy(result[index].str, av[index]);
		ft_strcpy(result[index].copy, av[index]);
		index++;
	}
	result[index].str = 0;
	return (result);
}
