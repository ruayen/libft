/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:00:48 by marvin            #+#    #+#             */
/*   Updated: 2024/12/10 12:00:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int					i;
	int					sign;
	unsigned long long	result;

	result = 0;
	sign = 1;
	i = 0;

while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
    {
        i++;
    }
    
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
while(str[i] !='\0' && str[i] >= '0' && str[i] <= '9')
{
    result = result * 10 + (str[i] - '0');
    i++;
}
return (sign * result);
}
/*
#include <stdio.h>
int main()
{
    
    const char *str1 = "12345";
    const char *str2 = "-98a76";
    const char *str3 = "   42";
    const char *str4 = "+67";
    const char *str5 = "   -2147483648"; 

    printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
    printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
    printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
    printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));
    printf("ft_atoi(\"%s\") = %d\n", str5, ft_atoi(str5));

    return 0;
}*/
