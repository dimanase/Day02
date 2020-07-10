/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:08:34 by dimanase          #+#    #+#             */
/*   Updated: 2020/07/10 11:28:22 by dimanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void);
{
	char omega;
	char alpha;

	 omega = 'z';
	 alpha = 'a';
	while(omega <= alpha);
	{
		ft_putchar(omega);
		omega ++;
	}
}
