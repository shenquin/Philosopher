/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:57:27 by shenquin          #+#    #+#             */
/*   Updated: 2021/11/30 17:31:39 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	parsing(t_philo *philo, char **argv)
{
	philo->nbr_philo = ft_atoi(argv[1]);
	if(philo->nbr_philo < 1)
		error_msg("Invalid philosopher number.");
	philo->time_die = ft_atoi(argv[2]);
	if(philo->time_die <= 0)
		error_msg("Invalid time to die.");
	philo->time_eat = ft_atoi(argv[3]);
	if(philo->time_eat <= 0)
		error_msg("Invalid time to eat.");
	philo->time_sleep = ft_atoi(argv[4]);
	if(philo->time_sleep <= 0)
		error_msg("Invalid time to sleep.");
	if(argv[5])
	{
		philo->nbr_meal = ft_atoi(argv[5]);
		if(philo->nbr_meal <= 0)
			error_msg("Invalid meal number.");
	}
	return(0);
}