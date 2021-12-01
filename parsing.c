/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:57:27 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 14:46:29 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	parsing(t_data *data, char **argv)
{
	data->nbr_philo = ft_atoi(argv[1]);
	if(data->nbr_philo < 1)
		return(error_msg("Invalid value : philosopher number."));
	data->time_die = ft_atoi(argv[2]);
	if(data->time_die <= 0)
		return(error_msg("Invalid time to die."));
	data->time_eat = ft_atoi(argv[3]);
	if(data->time_eat <= 0)
		return(error_msg("Invalid value : time to eat."));
	data->time_sleep = ft_atoi(argv[4]);
	if(data->time_sleep <= 0)
		return(error_msg("Invalid value : time to sleep."));
	if(argv[5])
	{
		data->nbr_meal = ft_atoi(argv[5]);
		if(data->nbr_meal <= 0)
			return(error_msg("Invalid value : meal number."));
	}
	return(0);
}