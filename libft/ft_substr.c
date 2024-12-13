/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:07:06 by marvin            #+#    #+#             */
/*   Updated: 2024/12/11 14:07:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	str = malloc(len + 1);
	if (!s || !str)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    
    char *substring = ft_substr(str, 7, 5); 
    if (substring != NULL) {
        printf("Substring: %s\n", substring);
        free(substring);
        printf("Failed to allocate memory for substring.\n");
    }
    
    return 0;
}
*/