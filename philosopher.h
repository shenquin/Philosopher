/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:41:18 by shenquin          #+#    #+#             */
/*   Updated: 2021/11/30 17:40:04 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_philo
{
	int	nbr_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	nbr_meal;
}				t_philo;

void	init_struct(t_philo *philo);
int main(int argc, char **argv);
int	error_msg(char *str);
int	atoi(char *str);
int	is_digit(char *s);
int	parsing(t_philo *philo, char **argv);
int	error_arg(char **argv);

#endif