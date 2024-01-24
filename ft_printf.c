/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:44:13 by jkarimov          #+#    #+#             */
/*   Updated: 2024/01/24 15:47:31 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_checker(va_list args, const char s, int *count)
{
	if (s == 'c')
		ft_putchar(va_arg(args, int), count);
	if (s == 's')
		ft_putstr(va_arg(args, char *), count);
	if (s == 'p')
		ft_pointer(va_arg(args, unsigned long), count);
	if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(args, int), count);
	if (s == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), count);
	if (s == 'x')
		ft_lowercase(va_arg(args, unsigned int), count);
	if (s == 'X')
		ft_uppercase(va_arg(args, unsigned int), count);
	if (s == '%')
		ft_percent(count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_format_checker(args, s[i], &count);
			i++;
		}
		else
		{
			ft_putchar(s[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			c = 'h';
// 	char			*s = "Hello, World!";
// 	void			*p = (void *)0x7fff5694dc58;
// 	int				nbr	= 42;
// 	unsigned int	n = 2024;
// 	unsigned int	hex_lower = 0xabcd;
// 	unsigned int	hex_upper = 0xABCD;

// //printing single char
// 	printf("Standard: %c\n", c);
// 	ft_printf("Mine: %c\n", c);
// //printing string
// 	printf("Standard: %s\n", s);
// 	ft_printf("Mine: %s\n", s);
// //printing pointer
// 	printf("Standard: %p\n", (void *)p);
// 	ft_printf("Mine: %p\n", (void *)p);
// //printing digit or int
// 	printf("Standard: %d\n Standard: %i\n", nbr, nbr);
// 	ft_printf("Mine: %d\n Mine %i\n", nbr, nbr);
// //printing unsigned int
// 	printf("Standard: %u\n", n);
// 	ft_printf("Mine: %u\n", n);
// //printing hex value in lowercase
// 	printf("Standard: %x\n", hex_lower);
// 	ft_printf("Mine: %x\n", hex_lower);
// //printing hex value in uppercase
// 	printf("Standard: %X\n", hex_upper);
// 	ft_printf("Mine: %X\n", hex_upper);
// //printing % sign
// 	printf("Standard: %%\n");
// 	ft_printf("Mine: %%\n");
// }
