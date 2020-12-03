/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:58:11 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 11:58:18 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str  < 'a' || *str > 'z')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *as = "fgg fgh";
	int n = ft_str_is_alpha(as);
	printf("%i", n);
}


