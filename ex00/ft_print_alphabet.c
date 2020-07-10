/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:28:14 by dimanase          #+#    #+#             */
/*   Updated: 2020/07/10 16:19:56 by dimanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char alpha;
	alpha = 'a';
	while(alpha <= 'z');
	{	ft_putchar(alpha);
		alpha ++;
	}
}
