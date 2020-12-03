/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:15:31 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 12:15:34 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{	
	int count = 0;
	while (str[count] != '\0')
	{
		if ((str[count]  >= 'a') && (str[count] <= 'z'))
		{
		str[count] -= 32;
		}
		count++; 
	}
	return str;
}

int main()
{
	char *as = "AiS"; 
	ft_strupcase(as);
	printf("%s", as);
}

/*
bus error perché sto spostando il cursore lungo la stringa con str++ ?
char *ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str  >= 'a') && (*str <= 'z'))
		{
		*str -= 32;
		}
		str++; 
	}
	return str;
}
*/