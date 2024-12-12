/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:07:09 by marvin            #+#    #+#             */
/*   Updated: 2024/12/10 15:07:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (*ptr && n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*#include <stdio.h>
int main() 
{ 
int *arr; 
arr = (int *)ft_calloc(5, sizeof(int)); 
if (!arr) 
{ 
printf("Memory allocation failed.\n"); 
return 1; 
} 
printf("First element: %d\n", arr[0]); 
free(arr); return 0; 
}*/
