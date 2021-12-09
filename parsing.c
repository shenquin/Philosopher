/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:57:27 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/09 15:58:45 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	parsing(t_philo *philo, char **argv)
{
	philo->nbr_philo = ft_atoi(argv[1]);
	if(philo->nbr_philo < 1)
		return(error_msg("Invalid value : philosopher number."));
	philo->time_die = ft_atoi(argv[2]);
	if(philo->time_die <= 0)
		return(error_msg("Invalid time to die."));
	philo->time_eat = ft_atoi(argv[3]);
	if(philo->time_eat <= 0)
		return(error_msg("Invalid value : time to eat."));
	philo->time_sleep = ft_atoi(argv[4]);
	if(philo->time_sleep <= 0)
		return(error_msg("Invalid value : time to sleep."));
	if(argv[5])
	{
		philo->nbr_meal = ft_atoi(argv[5]);
		if(philo->nbr_meal <= 0)
			return(error_msg("Invalid value : meal number."));
	}
	return(0);
}