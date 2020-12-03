/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:00:51 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 12:00:54 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str  < 'A' || *str > 'Z')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *as = "AiS";
	int n = ft_str_is_alpha(as);
	printf("%i", n);
}

