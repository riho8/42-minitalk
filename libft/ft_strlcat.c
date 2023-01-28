/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:47:27 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:32:23 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	if (!dest && src && !size)
		return (ft_strlen(src));
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dst_len || size < 1)
		return (src_len + size);
	ft_strlcpy(dest + dst_len, src, size - dst_len);
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char s12[20] = "abc";
// 	char s13[20] = "abc";
// 	char s14[20] = "abc";
// 	char s15[20] = "abc";
// 	char s16[20] = "abc";
// 	char s17[20] = "abc";
// 	char s18[20] = "abc";
// 	char s19[20] = "abc";
// 	char s20[20] = "abc";
// 	char s21[20] = "abc";
// 	printf("0\n");
// 	printf("ans: %lu\n", strlcat(s12, "ABC", 0));
// 	printf("ans:%s\n", s12);
// 	printf("you: %zu\n", ft_strlcat(s13, "ABC", 0));
// 	printf("you:%s\n", s13);
// 	printf("1\n");
// 	printf("ans: %lu\n", strlcat(s12, "ABC", 2));
// 	printf("ans:%s\n", s12);
// 	printf("you: %zu\n", ft_strlcat(s13, "ABC", 2));
// 	printf("you:%s\n", s13);
// 	printf("2\n");
// 	printf("ans: %lu\n", strlcat(s12, "ABC", 3));
// 	printf("ans:%s\n", s12);
// 	printf("you: %zu\n", ft_strlcat(s13, "ABC", 3));
// 	printf("you:%s\n", s13);
// 	printf("3\n");
// 	printf("ans: %lu\n", strlcat(s14, "ABC", 4));
// 	printf("ans:%s\n", s14);
// 	printf("you: %zu\n", ft_strlcat(s15, "ABC", 4));
// 	printf("you:%s\n", s15);
// 	printf("4\n");
// 	printf("ans: %lu\n", strlcat(s16, "ABC", 5));
// 	printf("ans:%s\n", s16);
// 	printf("you: %zu\n", ft_strlcat(s17, "ABC", 5));
// 	printf("you:%s\n", s17);
// 	printf("5\n");
// 	printf("ans: %lu\n", strlcat(s18, "ABC", 7));
// 	printf("ans:%s\n", s18);
// 	printf("you: %zu\n", ft_strlcat(s19, "ABC", 7));
// 	printf("you:%s\n", s19);
// 	printf("6\n");
// 	printf("ans: %lu\n", strlcat(s20, "ABC", 8));
// 	printf("ans:%s\n", s20);
// 	printf("you: %zu\n", ft_strlcat(s21, "ABC", 8));
// 	printf("you:%s\n", s21);

// 	return (0);
// }