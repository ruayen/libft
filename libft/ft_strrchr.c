/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissaou <raissaou@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 11:36:37 by raissaou          #+#    #+#             */
/*   Updated: 2024-12-03 11:36:37 by raissaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != 0)
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}

/*
#include <stdio.h>
int main()
{
    const char *str = "olo";
    char c = 'o';

    char *result = ft_strrchr(str, c);

    if (result != NULL) {
        printf("The character '%c' is in position %ld\n", c, result - str);
    } else {
        printf("The character '%c' is not found in the string.\n", c);
    }

    return 0;
}*/