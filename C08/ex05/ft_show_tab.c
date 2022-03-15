/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:28:38 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 15:28:56 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	while (*(str) != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	putnbr(long nbr)
{
	int buffer[10];
	int buffer_index;

	if (nbr == 0)
		write(1, "0", 1);
	buffer_index = 9;
	while (nbr != 0)
	{
		buffer[buffer_index] = '0' + (nbr % 10);
		buffer_index--;
		nbr /= 10;
	}
	while (buffer_index < 9)
	{
		buffer_index++;
		write(1, buffer + buffer_index, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		write(1, "\n", 1);
		putnbr(par[index].size);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		write(1, "\n", 1);
		index++;
	}
}
