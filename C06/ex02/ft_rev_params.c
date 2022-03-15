/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:08:52 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 11:11:17 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		arg;
	char	*c;

	arg = argc - 1;
	while (arg >= 1)
	{
		c = argv[arg--];
		i = 0;
		while (c[i] != '\0')
			write(1, &c[i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
