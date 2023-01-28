/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:08:58 by rshimaok          #+#    #+#             */
/*   Updated: 2023/01/08 15:47:46 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	i = 0;
	if (buf1 == buf2)
		return (buf1);
	dest = (unsigned char *)buf1;
	src = (const unsigned char *)buf2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (buf1);
}

// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char buf2[] = "123456789";
// 	char buf3[] = "ABCDEFG";
// 	char buf4[] = "ABCDEFG";
// 	char buf5[] = "ABCDEFG";
// 	char buf6[] = "ABCDEFG";
// 	// char c[256] = "42tokyo";

// 	printf("ans;%s\n",(char*)memcpy(buf,buf2,3)); //123DEFG
// 	printf("you;%s\n",(char*)ft_memcpy(buf3,buf2,3)); //123DEFG
// 	printf("you;%s\n", (char*)ft_memcpy(buf4, buf5, 4));  // 0x0
// 	printf("ans;%s\n", (char*)memcpy(buf6, buf5, 4));  // 0x0
// 	// printf("you;%s\n", (char*)ft_memcpy( c, NULL, 4));  // segmentation fault
// 	// printf("ans;%s\n", (char*)memcpy( c, NULL, 4));  // segmentation fault
// 	// printf("you;%s\n", (char*)ft_memcpy(NULL, c , 4));  // segmentation fault
// 	// printf("ans;%s\n", (char*)memcpy(NULL, c , 4));  // segmentation fault
// 	return (0);
// }
