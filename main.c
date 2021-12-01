/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:56:37 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 15:26:54 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int argc, char **argv)
{
	t_philo	*philo;
	t_data	*data;
	t_ph	*ph;
	
	alloc(&ph, &philo, &data);
	init_struct(ph);
	if(argc != 5 || argc != 6)
		return(error_msg("Too many or too few arguments."));
	error_arg(argv);
	parsing(philo, argv);
	free_struct(ph, philo, data);
	return(0);
}