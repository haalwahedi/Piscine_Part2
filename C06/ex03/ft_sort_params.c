/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:10:05 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 11:10:29 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		swap(char **c1, char **c2)
{
	char *s;

	s = *c1;
	*c1 = *c2;
	*c2 = s;
}

int			compare(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			x = 1;
			break ;
		}
		if (s1[i] < s2[i])
		{
			x = -1;
			break ;
		}
		i++;
	}
	return (x);
}

void		print(int argc, char **argv)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		c = argv[j++];
		i = 0;
		while (c[i] != '\0')
			write(1, &c[i++], 1);
		write(1, "\n", 1);
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 2;
	j = 1;
	while (i < argc)
	{
		while (j < (argc - 1))
		{
			if (compare(argv[j], argv[j + 1]) == 1)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		j = 1;
		i++;
	}
	print(argc, argv);
	return (0);
}
