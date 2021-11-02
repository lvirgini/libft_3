/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_fusion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:55:28 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 12:54:09 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**list_fusion(char **first, char **second, int	index)
{
	size_t	total_len;
	char	**result;
	(void)index;

	if (!first || !*first)
		return (second);
	if (!second || !*second)
		return (first);
	total_len = listlen(first) + listlen(second);
	result = malloc_list(total_len);
/*	list_dup_max(result, first, index);
	list_dup(result + index, second);
	list_dup()*/
	return (result);
}