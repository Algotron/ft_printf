/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkleynts <tkleynts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 07:44:40 by tkleynts          #+#    #+#             */
/*   Updated: 2020/01/27 13:52:40 by tkleynts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

# define X_MAJ "0123456789ABCDEF"
# define X_MIN "0123456789abcdef"

typedef struct
{
	int			ljust;//-
	int			pad;//0
	int			prec;//.num
	int			width;//num
}				t_flags;

typedef struct
{
	va_list		args;
	char		*f_cpy;
	char		*buff;
	size_t		size_ret;			
}	t_utils;

int				ft_printf(const char *format, ...);
char			*is_flag(t_utils *data);
char			*conv_c(t_utils *data, t_flags *flgs, char c);
char			*conv_s(t_utils *data, t_flags *flgs, char *str);
char			*conv_pc(t_utils *data, t_flags *flgs, char *str);
char			*conv_diux(t_utils *data, t_flags *flgs, char *str);
char			*conv_p(t_utils *data, t_flags *flgs, char *str);
int				ft_add_l(char **str, int width, char c, int w);
int				ft_add_r(char **str, int width, char c, int is_z);
int				ft_s_dow(char **str, int prec);

#endif
