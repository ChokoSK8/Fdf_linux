/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_param_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:51:23 by abrun             #+#    #+#             */
/*   Updated: 2021/10/20 17:53:09 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	free_init_param(t_param *param)
{
	mlx_destroy_display(param->mlx);
	free(param->mlx);
}
