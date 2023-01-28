/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:50:05 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:49:04 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char src[10] = "abcdefg";
// 	char dest1[10];
// 	char dest2[10];
// 	printf("ans: %lu, %s\n", strlcpy(dest1, src, 3), dest1);
// 	printf("you: %zu, %s\n", ft_strlcpy(dest2, src, 3), dest2);

// 	return (0);
// }