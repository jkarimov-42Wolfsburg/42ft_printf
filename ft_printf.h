/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:44:06 by jkarimov          #+#    #+#             */
/*   Updated: 2024/01/08 19:41:55 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *sign, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int	*count);
void	ft_putnbr(int n, int *count);
void	ft_print_unsigned(unsigned int n, int *count);
void	ft_print_pointer(unsigned long n, int *count);
void	ft_pointer(unsigned long n, int *count);
void	ft_lowercase(unsigned long n, int *count);
void	ft_uppercase(unsigned long n, int *count);
void	ft_percent(int *count);
void	ft_format_checker(va_list args, const char s, int *count);

#endif