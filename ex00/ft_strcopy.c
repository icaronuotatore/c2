/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:21:05 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/02 20:02:15 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while(*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}

int main()
{
	char *str = "asd";
	char *dest = NULL;

	ft_strcpy(boh, str);
	printf("%s", boh);
}
