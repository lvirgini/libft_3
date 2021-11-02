/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:10 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 13:16:23 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** free all list
*/

void	free_list(char **list)
{
	size_t		i;

	i = 0;
	if (list)
	{
		while (list[i])
		{
			free(list[i]);
			list[i] = NULL;
			i++;
		}
		free(list);
	}
}

/*
** free char ** until nb
** usefull for malloc error.
*/

void	free_n_list(char **list, size_t max)
{
	size_t		i;

	if (!list)
		return ;
	i = 0;
	while (i < max)
	{
		free(list[i]);
		list[i] = NULL;
		i++;
	}
	free(list);
}
