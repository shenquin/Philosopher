/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:24:53 by shenquin          #+#    #+#             */
/*   Updated: 2021/12/01 14:41:40 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_arg(char **argv)
{
	int i;

	i = 1;
	while(argv[i++])
	{
		if(is_digit(argv[i]) != 0)
			return(error_msg("Error : argument is not a number."));
	}
	return(0);
}