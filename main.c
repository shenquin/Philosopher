/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:56:37 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/09 16:38:06 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int argc, char **argv)
{
	t_philo *philo;
	
	init_struct(&philo);
	if(parsing(&philo, argv) != 0)
		return(-1);
	if(error_arg(argc, argv) != 0)
		return(-1);
	free_struct(&philo);
	return(0);
}