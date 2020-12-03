/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:02:25 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 12:02:27 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str  < 32 || *str > 126)
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *as = "~";
	int n = ft_str_is_alpha(as);
	printf("%i", n);
}
