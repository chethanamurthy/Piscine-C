/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:08:08 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/25 15:12:10 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main (int argc, char **argv)
{
	if (argc > 1)
		while (*argv[argc-1])
			write(1, argv[argc - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}

