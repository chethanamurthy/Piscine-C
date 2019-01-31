/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:07:58 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/25 11:26:56 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 123;
	while (i-- > 97)
	{
		if (i % 2 == 0)
		   	 ft_putchar(i);				
		else
			ft_putchar(i - 32);
	}
	ft_putchar('\n');
	return (0);
}
