/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:45:22 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/08 22:51:17 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		arg;
	char	*c;

	arg = 1;
	while (arg < argc)
	{
		c = argv[arg++];
		i = 0;
		while (c[i] != '\0')
			write(1, &c[i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
