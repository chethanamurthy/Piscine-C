/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:24:18 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/30 15:00:46 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}

	if(argv[2][1] !='\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return 0;
	}

	while (argv[1][i])
	{
		if(argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write (1, &argv[1][i],1);
		i++;
	}
write(1, "\n", 1);
return(0);
}
