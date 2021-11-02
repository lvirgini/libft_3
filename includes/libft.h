/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:09:18 by lvirgini          #+#    #+#             */
/*   Updated: 2021/10/28 12:42:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef FAILURE
#  define FAILURE 0
# endif

# ifndef SUCCESS
#  define SUCCESS 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include "get_next_line.h"
# include "libft_is_something.h"
# include "libft_memory.h"
# include "libft_little_maths.h"
# include "libft_print.h"
# include "libft_conversion.h"
# include "libft_allocation.h"
# include "libft_string.h"
# include "libft_list.h"

/*
** Global Usage
*/

enum e_bool
{
	false,
	true,
};


#endif
