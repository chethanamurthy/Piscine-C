/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:23:17 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/25 15:31:21 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int argc, char **argv)
{
	int repeat;
	if (argc == 2)
	{
		while ( *argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write (1, argv[1], 1);
			argv[1]++;
		}
	}
	return (0);

}

