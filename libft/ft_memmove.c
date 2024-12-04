/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissaou <raissaou@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 09:38:50 by raissaou          #+#    #+#             */
/*   Updated: 2024-12-03 09:38:50 by raissaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (dest <= src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	*d = '\0';
}

/*
int main() {
    char src[] = "Hola Mundo";
    char dest[20];

    ft_memmove(dest, src, 10);
    printf("Destino: %s\n", dest);
    
    return 0;
}*/