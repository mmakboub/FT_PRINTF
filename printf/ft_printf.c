/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:05:21 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/18 21:49:50 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_cas(char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	if (c == 'c')
		*count += ft_putchar(va_arg(args, int));
	if (c == 's')
		*count += ft_putstr(va_arg(args, char *));
	if (c == 'x')
		*count += ft_putnbr_base_x(va_arg(args, unsigned int),
				"0123456789abcdef", 16);
	if (c == 'X')
		*count += ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF", 16);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	if (c == 'p')
	{
		ft_putstr("0x");
		*count += 2;
		*count += ft_putnbr_base_p(va_arg(args, unsigned long int),
				"0123456789abcdef", 16);
	}
	if (c == '%')
		*count += write(1, "%%", 1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_cas (str[i], args, &count);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
int main(){
	ft_printf("%c\n",'y');
}