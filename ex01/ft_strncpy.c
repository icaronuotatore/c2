/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:13:23 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/02 20:15:31 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while ((*(src + count) != '\0') && (count < n))
	{
		*(dest + count) = *(src + count);
		count++;
	}
	while (count < n - 1)
	{
		*(dest + count) = '\0';
		count++;
	}
	return (dest);
}

int main()
{
	char *sou = "asd";
	char *des = "dgljfgljndfglgk";

	ft_strncpy(des, sou, 5);
	printf("%s", des);
	printf("%c", *(des + 3));
}
