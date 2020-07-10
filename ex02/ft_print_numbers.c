/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:26:20 by dimanase          #+#    #+#             */
/*   Updated: 2020/07/10 15:52:02 by dimanase         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/
#include <unistd.h>
void	ft_putchar(void);
{
	write(1, &c, 1);
}
void ft_is_negative(int  c)
{
	if (c >= 0)
		ft_putchar(P);
	else if (c <= 0)
		ft_putchar(N);
}


