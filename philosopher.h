/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:41:18 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/09 16:41:50 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>
#include <string.h>

typedef struct	s_philo
{
	int	nbr_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	nbr_meal;
	int	death;
	int	start;
	pthread_t	ph_id;
	pthread_t	death;
	pthread_mutex_t right_f;
	pthread_mutex_t *left_f;
	pthread_mutex_t write;
	pthread_mutex_t death_mutex;
}	t_philo;


void	init_struct(t_philo *philo);
void	free_struct(t_philo *philo);
int		error_msg(char *str);
int		main(int argc, char **argv);
int		ft_atoi(char *str);
int		is_digit(char *s);
int		parsing(t_philo *philo, char **argv);
int		error_arg(int argc, char **argv);

#endif