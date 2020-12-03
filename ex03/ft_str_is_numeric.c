/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:54:42 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 11:54:45 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str  < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *as = "4509 8645";
	int n = ft_str_is_alpha(as);
	printf("%i", n);
}

