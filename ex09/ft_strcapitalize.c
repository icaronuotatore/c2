/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmassa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:55:03 by nmassa            #+#    #+#             */
/*   Updated: 2020/12/03 17:55:06 by nmassa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (count == 0)
				str[count] -= 32;
			if (str[count - 1] > 31 && str[count -1] < '0')
				str[count] -= 32;
			if (str[count - 1] > '9' && str[count -1] < 'A')
				str[count] -= 32;
			if (str[count - 1] > 'Z' && str[count -1] < 'a')
				str[count] -= 32;
			if (str[count - 1] > 'z' && str[count -1] < 127)
				str[count] -= 32;
		}
		count++;
	}
	return (str);
}

int main()
{
	char stringa[] = "salut~comGKGent Fu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(stringa);
	printf("%s", stringa);
}

