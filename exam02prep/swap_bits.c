/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:25:48 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/25 11:05:11 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

int main(void)
{
	char c;
	c ='1';

	write (1, &c, 1);
	c = swap_bits(c);
	write (1, &c, 1);
	return(0);
}

