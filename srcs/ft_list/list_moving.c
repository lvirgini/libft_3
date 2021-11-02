/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_moving.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:22:12 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 11:26:17 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** recupere les pointeurs des char *env de OLD pour les mettre dans env
*/

int	moving_list(char **list, char **old_list, int max)
{
	int		i;

	i = 0;
	while (i < max && old_list[i])
	{
		list[i] = old_list[i];
		i++;
	}
	return (i);
}
