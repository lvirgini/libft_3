/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:28:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 13:17:07 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

# include "libft.h"

char	**malloc_list(int size);
char	**list_dup(char **src);
char	**list_ndup(char **src, size_t max);
size_t	listlen(char **list);
void	free_list(char **list);
void	free_n_list(char **list, size_t max);
void	print_list(char **list);
int		list_move(char **dst, char **src);
int		list_nmove(char **dst, char **src, size_t max);
int		list_index_move(char **dst, char **src, size_t first, size_t last);

#endif