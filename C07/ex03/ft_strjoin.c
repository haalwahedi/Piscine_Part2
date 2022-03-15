/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:28:55 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/14 13:27:06 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

int		ft_len(char *str1)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
		i++;
	return (i);
}

int		ft_totlen(int size, char **strs, char *sep)
{
	int len;
	int i;

	i = 0;
	len = (size - 1) * ft_len(sep);
	while (size != 0)
	{
		len = len + ft_len(strs[i]);
		size--;
	}
	len += 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*joint;

	if (size <= 0)
	{
		joint = (char *)malloc(sizeof(char));
		return (joint);
	}
	i = 0;
	len = ft_totlen(size, strs, sep);
	joint = (char *)malloc(sizeof(char) * len);
	while (i != size)
	{
		joint = ft_strcat(joint, strs[i]);
		if (i < size - 1)
			joint = ft_strcat(joint, sep);
		i++;
	}
	joint[len] = '\0';
	return (joint);
}
