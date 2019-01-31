/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrishna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:27:08 by ckrishna          #+#    #+#             */
/*   Updated: 2019/01/25 11:53:29 by ckrishna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int main()
{
	char s1[] = "Chethana";
	char s2[] = "Ashwini";

	printf("%s\n", s1);
	ft_strcpy(s1,s2);
   printf ("%s\n", s1);
return (0);
}

