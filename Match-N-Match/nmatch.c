/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 17:36:20 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/20 21:13:55 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	char	*rest;
	int		count;

	if (!*s2)
	{
		if (*s1)
			return (0);
		else
			return (1);
	}
	if (*s2 == '*')
	{
		rest = s1;
		count = 0;
		while (*rest)
		{
			count += nmatch(rest, s2 + 1);
			++rest;
		}
		return (count += nmatch(rest, s2 + 1));
	}
	if (*s2 == *s1)
		return (nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}
