/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:24:53 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/02 16:43:46 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	error_arg(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc != 5 || argc != 6)
		return(error_msg("Too many or too few arguments."));
	while(argv[i++])
	{
		if(is_digit(argv[i]) != 0)
			return(error_msg("Error : argument is not a number."));
	}
	return(0);
}