/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:41:18 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 15:19:57 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_data
{
	int	nbr_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	nbr_meal;
}	t_data;

typedef struct s_philo
{
	
}	t_philo;

typedef struct	s_ph
{
	t_data *data;
	t_philo *philo;
}	t_ph;


void	init_struct(t_ph *ph);
int	error_msg(char *str);
int main(int argc, char **argv);
int	atoi(char *str);
int	is_digit(char *s);
int	parsing(t_data *data, char **argv);
int	error_arg(char **argv);

#endif