/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:14:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/11/02 09:07:44 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy complete pointer in src to dst;
*/

int	list_move(char **dst, char **src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = NULL;
	return (SUCCESS);
}

/*
** copy until max pointer in src to dst;
*/

int	list_nmove(char **dst, char **src, size_t max)
{
	size_t		i;
	size_t		len;


	if (!dst || !src)
		return (FAILURE);
	len = listlen(src);
	if (len < max)
		max = len;
	i = 0;
	while (i < max && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = NULL;
	return (SUCCESS);
}

int	list_index_move(char **dst, char **src, size_t first, size_t last)
{
	if (last == 0 || first > last || listlen(src) < first)
		return (FAILURE);
	return (list_nmove(dst, src + first, last));
}
