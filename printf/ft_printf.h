/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:44:12 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/18 21:53:44 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
void	ft_putnbr(int d, int *count);
void	ft_putnbr_u(unsigned int u, int *count);
int		ft_putnbr_base_x(unsigned int nbr, char *str, unsigned int base);
int		ft_putnbr_base(unsigned int nbr, char *str, unsigned int base);
int		ft_putnbr_base_p(unsigned long int nbr, char *str, unsigned int base);
int		ft_printf(const char *str, ...);
void	ft_cas(char c, va_list arg, int *count);
#endif
