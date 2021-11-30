/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:56:37 by shenquin          #+#    #+#             */
/*   Updated: 2021/11/30 17:39:15 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"
void	init_struct(t_philo *philo)
{
	philo->nbr_philo = 0;
	philo->time_die = 0;
	philo->time_eat = 0;
	philo->time_sleep = 0;
	philo->nbr_meal = 0;
}

int main(int argc, char **argv)
{
	t_philo	*philo;
	
	init_struct(philo);
	if(argc != 5 || argc != 6)
		error_msg("Too many or too few arguments.");
	error_arg(argv);
	parsing(philo, argv);
	return(0);
}