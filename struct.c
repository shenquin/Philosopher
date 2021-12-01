/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:15:41 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 15:26:40 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	alloc(t_ph **ph, t_philo **philo, t_data **data)
{
	*philo = malloc(sizeof(t_philo));
	*data = malloc(sizeof(t_data));
	*ph = malloc(sizeof(t_ph));
}

void	free_struct(t_ph *ph, t_philo *philo, t_data *data)
{
	free(philo);
	free(data);
	free(ph);
}

void	init_struct(t_ph *ph)
{
	ph->data->nbr_philo = 0;
	ph->data->time_die = 0;
	ph->data->time_eat = 0;
	ph->data->time_sleep = 0;
	ph->data->nbr_meal = 0;
}