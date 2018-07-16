/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:42:44 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/28 07:44:40 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int numb;
	int negat;

	i = 0;
	numb = 0;
	negat = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		negat = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		numb *= 10;
		numb += (int)str[i] - '0';
		i++;
	}
	if (negat == 1)
		return (-numb);
	return (numb);
}

int     main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ME : %d\n", ft_atoi(av[1]));
		printf("MAC : %d\n", atoi(av[1]));
	}
	return (0);
}
