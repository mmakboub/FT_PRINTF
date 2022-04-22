/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_auxil_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:50:59 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/08 21:07:46 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_base_x(unsigned int nbr, char *str, unsigned int base)
{
	int		r;

	r = 1;
	if (nbr >= base)
		r += ft_putnbr_base_x(nbr / base, str, base);
	ft_putchar(str[nbr % base]);
	return (r);
}

int	ft_putnbr_base(unsigned int nbr, char *str, unsigned int base)
{
	int		r;

	r = 1;
	if (nbr >= base)
		r += ft_putnbr_base(nbr / base, str, base);
	ft_putchar(str[nbr % base]);
	return (r);
}

int	ft_putnbr_base_p(unsigned long int nbr, char *str, unsigned int base)
{
	int		r;

	r = 1;
	if (nbr >= base)
		r += ft_putnbr_base_p(nbr / base, str, base);
	ft_putchar(str[nbr % base]);
	return (r);
}
