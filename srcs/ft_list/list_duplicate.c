/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_duplicate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:44:17 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 13:04:54 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Duplicate complete char **list
*/

char	**list_dup(char **src)
{
	size_t	len;
	char	**dst;
	size_t	i;

	len = listlen(src);
	dst = malloc_list(len);
	if (dst)
	{
		i = 0;
		while (i < len)
		{
			dst[i] = ft_strdup(src[i]);
			if (!dst[i])
			{
				free_n_list(dst, i);
				return (NULL);
			}
			i++;
		}
		dst[i] = NULL;
	}
	return (dst);
}

/*
** Duplicate no more than <max> index of char **list
*/

char	**list_ndup(char **src, size_t max)
{
	size_t	len;
	size_t	i;
	char	**dst;

	len = listlen(src);
	if (len < max)
		max = len;
	dst = malloc_list(max);
	if (dst)
	{
		i = 0;
		while (i < max)
		{
			dst[i] = ft_strdup(src[i]);
			if (!dst[i])
			{
				free_n_list(dst, i);
				return (NULL);
			}
			i++;
		}
		dst[i] = NULL;
	}
	return (dst);
}
