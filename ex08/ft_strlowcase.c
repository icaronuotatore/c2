/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:59:22 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 16:59:25 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:59:22 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 16:59:22 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{	
	int count = 0;
	while (str[count] != '\0')
	{
		if ((str[count]  >= 'A') && (str[count] <= 'Z'))
		{
		str[count] += 32;
		}
		count++; 
	}
	return str;
}

int main()
{


	char stringa[] = "wfKJFs";

	ft_strlowcase(stringa);
	printf("%s", stringa);
}


