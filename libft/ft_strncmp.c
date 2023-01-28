/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:35:03 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/21 13:36:04 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' || str2[i] == '\0' || i == n - 1)
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	char *s3;
// 	char *s4;
// 	s1 = "1234";
// 	s2 = "ABCABC";
// 	s3 = "A";
// 	s4 = "1235";
// 	printf("you: %d\n", ft_strncmp(s1, s2, 4)); //3
// 	printf("ans: %d\n", strncmp(s1, s2, 4));
// 	printf("you: %d\n", ft_strncmp(s1, s3, 4)); //66('\0' - 'B')
// 	printf("ans: %d\n", strncmp(s1, s3, 4));
// 	printf("you: %d\n", ft_strncmp(s1, s4, 3)); //0
// 	printf("ans: %d\n", strncmp(s1, s4, 3));
// 	printf("you: %d\n", ft_strncmp(s1, s2, 0)); //0
// 	printf("ans: %d\n", strncmp(s1, s2, 0));
// 	printf("you: %d\n", ft_strncmp(s1, "\0", 3)); //65('\0' - 'A')
// 	printf("ans: %d\n", strncmp(s1, "\0", 3));
// 	printf("you: %d\n", ft_strncmp(NULL, NULL, 3)); //segmentation falut
// 	printf("ans: %d\n", strncmp(NULL, NULL, 3));
// 	return (0);
// }