/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 02:39:19 by halwahed          #+#    #+#             */
/*   Updated: 2021/06/26 02:41:54 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first(int i, int x)
{
	char c;

	if (i == 1)
	{
		c = 'A';
		ft_putchar(c);
	}
	if (i > 1 && i < x)
	{
		c = 'B';
		ft_putchar(c);
	}
	if (i > 1 && i == x)
	{
		c = 'C';
		ft_putchar(c);
	}
	if (i == x)
	{
		ft_putchar('\n');
	}
}

void	ft_between(int i, int x)
{
	char c;

	if (i == 1)
	{
		c = 'B';
		ft_putchar(c);
	}
	if (i > 1 && i < x)
	{
		c = ' ';
		ft_putchar(c);
	}
	if (i > 1 && i == x)
	{
		c = 'B';
		ft_putchar(c);
	}
	if (i == x)
	{
		ft_putchar('\n');
	}
}

void	ft_last(int i, int x)
{
	char c;

	if (i == 1)
	{
		c = 'A';
		ft_putchar(c);
	}
	if (i > 1 && i < x)
	{
		c = 'B';
		ft_putchar(c);
	}
	if (i > 1 && i == x)
	{
		c = 'C';
		ft_putchar(c);
	}
	if (i == x)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1)
			{
				ft_first(i, x);
			}
			if (j > 1 && j < y)
			{
				ft_between(i, x);
			}
			if (j == y && j > 1)
			{
				ft_last(i, x);
			}
			i++;
		}
		j++;
	}
}
