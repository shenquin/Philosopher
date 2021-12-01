/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:56:57 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 15:28:17 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	error_msg(char *str)
{
	printf("%s\n", str);
	return(-1);
}

int	atoi(char *str)
{
	int					i;
	int					j;
	unsigned long int	result;

	i = 0;
	j = 0;
	result = 0;
	while (*str == '0')
		str++;
	while (str[j] != '\0')
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		j++;
	}
	if (j > 10)
		return (error_msg("Error : max int.\n"));
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > INT32_MAX)
		return (error_msg("Error : max int.\n"));
	return (result);
}

int	is_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] > '9' || s[i] < '0')
			return (-1);
		i++;
	}
	return (0);
}
