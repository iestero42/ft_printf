/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:26:16 by iestero-          #+#    #+#             */
/*   Updated: 2022/12/13 17:28:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/**
 * Auxiliar function that print a string 
 * @param c the type of conversion 
 * @param args the argument pass by ft_printf to print
 * @return the number of chars printed
*/
int	ft_printf_aux(char c, va_list args)
{
	char	*str;
	int		count;

	str = check_format(args, c);
	if (!str)
	{
		ft_putchar_fd('\0', 1);
		return (1);
	}
	ft_putstr_fd(str, 1);
	count = (int) ft_strlen((const char *) str);
	free (str);
	return (count);
}

/**
 * Function to print a variable when a apropiate conversion is made 
 * @param str stores the type of conversion to be made
 * @return the number of chars printed
*/
int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			count += ft_printf_aux(str[++i], args);
		else
		{
			count++;
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
